name: Autograding Tests
'on':
- push
- repository_dispatch
permissions:
  checks: write
  actions: read
  contents: read
jobs:
  run-autograding-tests:
    runs-on: ubuntu-latest
    if: github.actor != 'github-classroom[bot]'
    steps:
    - name: Checkout code
      uses: actions/checkout@v4
    - name: construct
      id: construct
      uses: classroom-resources/autograding-io-grader@v1
      with:
        test-name: construct
        setup-command: make
        command: "./inh 012  3.0 pupha 120  3.1 ryan 221  2.3 Mix"
        input: ''
        expected-output: |-
          adding 12
          MU person constructor 12
          MU student constructor  3
          adding 120
          MU person constructor 120
          MU student constructor  3.1
          adding 221
          MU person constructor 221
          MU student constructor  2.3
        comparison-method: contains
        timeout: 10
        max-score: 10
    - name: show all
      id: show-all
      uses: classroom-resources/autograding-io-grader@v1
      with:
        test-name: show all
        setup-command: make
        command: "./inh 012  3.0 pupha 120  3.1 ryan 221  2.3 Mix"
        input: ''
        expected-output: |-
          Node data:221
          Node data:120
          Node data:12
        comparison-method: contains
        timeout: 10
        max-score: 15
    - name: destruct
      id: destruct
      uses: classroom-resources/autograding-io-grader@v1
      with:
        test-name: destruct
        setup-command: make
        command: " ./inh 012  3.0 pupha 120  3.1 ryan 221  2.3 Mix"
        input: ''
        expected-output: |-
          Node 221 is being deleted
          Node 120 is being deleted
          Node 12 is being deleted
        comparison-method: contains
        timeout: 10
        max-score: 29
    - name: Autograding Reporter
      uses: classroom-resources/autograding-grading-reporter@v1
      env:
        CONSTRUCT_RESULTS: "${{steps.construct.outputs.result}}"
        SHOW-ALL_RESULTS: "${{steps.show-all.outputs.result}}"
        DESTRUCT_RESULTS: "${{steps.destruct.outputs.result}}"
      with:
        runners: construct,show-all,destruct
