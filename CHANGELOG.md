# Changelog

## [0.3.1](https://github.com/mobimesh/pam_oauth2_device/compare/v0.3.0...v0.3.1) (2023-05-17)


### Bug Fixes

* look for exact user match if user map is empty ([72b342a](https://github.com/mobimesh/pam_oauth2_device/commit/72b342aa7fdc57a68bdcece490b151f17af671d3))

## [0.3.0](https://github.com/mobimesh/pam_oauth2_device/compare/v0.2.2...v0.3.0) (2023-02-24)


### Features

* print QR code before url, changed strings accordingly ([072ba51](https://github.com/mobimesh/pam_oauth2_device/commit/072ba511584b7c80372cf5b648da08f154c24ee0))

## [0.2.2](https://github.com/mobimesh/pam_oauth2_device/compare/v0.2.1...v0.2.2) (2023-02-23)


### Bug Fixes

* simplified qr code visualization for better portability ([b60e671](https://github.com/mobimesh/pam_oauth2_device/commit/b60e671f3718c390f75e281d8f4e1c44f8e7aea7))

## [0.2.1](https://github.com/mobimesh/pam_oauth2_device/compare/v0.2.0...v0.2.1) (2023-02-23)


### Bug Fixes

* added authorized_all flag, changed set size() to empty() check ([bd5b6b6](https://github.com/mobimesh/pam_oauth2_device/commit/bd5b6b646eb3e15d45c31d3ba5e1097a24085668))

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
