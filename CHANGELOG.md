# Changelog

## [0.2.0](https://github.com/mobimesh/pam_oauth2_device/compare/v0.1.1...v0.2.0) (2023-02-23)


### Features

* Check if group mapping is empty to authorize every member, otherwise check for exact match inside group mapping ([c2b003c](https://github.com/mobimesh/pam_oauth2_device/commit/c2b003c489f028618254e0bcb4382c241821ed04))


### Bug Fixes

* do not use strlen() to get length of string, not flawfinder-compliant ([04fbf47](https://github.com/mobimesh/pam_oauth2_device/commit/04fbf4773ce61cd6eed743284e55cdbe3a447384))
* response is not a c++ string, changing length check ([a3405ee](https://github.com/mobimesh/pam_oauth2_device/commit/a3405ee068bd82306c8d5e3d2906f6db79998eb1))

## 0.1.0 (2021-08-25)


### Features

* **QR:** add configuration option to disable QR code ([fd7c101](https://www.github.com/ICS-MU/pam_oauth2_device/commit/fd7c101e397df09932223f8b9f1de500c9ec3cf2)), closes [#14](https://www.github.com/ICS-MU/pam_oauth2_device/issues/14)


### Bug Fixes

* fix issues reported by cpplint ([e9fe5d6](https://www.github.com/ICS-MU/pam_oauth2_device/commit/e9fe5d6cfdf2f7ac035c0f124abb5b399cb09fee))
* fix issues reported by flawfinder ([019f24b](https://www.github.com/ICS-MU/pam_oauth2_device/commit/019f24b6d720953ec9d60348528cd28676a33f55))
* **python:** install pyyaml ([e0c5b4f](https://www.github.com/ICS-MU/pam_oauth2_device/commit/e0c5b4f3ccc67f83c9cfd623eda055e284e1d4e2))
