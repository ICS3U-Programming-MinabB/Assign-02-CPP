# Assign-02-CPP
##################################################

# Run Mr Coxall's Super Linter against code base #

##################################################

---

name: Mr Coxall's Super Linter

on: [push, pull_request]

jobs:

 run-linters:

   name: Mr Coxall's Super Linter

   runs-on: ubuntu-latest



   steps:

     - name: Check out Git repository

       uses: actions/checkout@main

     - name: Run GitHub Super Linter

       uses: github/super-linter@main

       env:

         VALIDATE_ALL_CODEBASE: true

         LINTER_RULES_PATH: /

         VALIDATE_CLANG_FORMAT: false

         VALIDATE_JAVASCRIPT_STANDARD: false

         VALIDATE_PYTHON_FLAKE8: false

         VALIDATE_GITLEAKS: false # for secrets detection

         VALIDATE_JSCPD: false # for copy and paste detection

         DEFAULT_BRANCH: main

         GITHUB_TOKEN: ${{ secrets.GITHUB_TOKEN }}
