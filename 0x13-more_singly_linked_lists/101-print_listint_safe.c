<!DOCTYPE html>
<!-- saved from url=(0124)https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c -->
<html lang="en" data-color-mode="auto" data-light-theme="light" data-dark-theme="dark_high_contrast"><link type="text/css" rel="stylesheet" id="dark-mode-custom-link"><link type="text/css" rel="stylesheet" id="dark-mode-general-link"><style lang="en" type="text/css" id="dark-mode-custom-style"></style><style lang="en" type="text/css" id="dark-mode-native-style"></style><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    
  <link rel="dns-prefetch" href="https://github.githubassets.com/">
  <link rel="dns-prefetch" href="https://avatars.githubusercontent.com/">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com/">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">
  <link rel="preconnect" href="https://github.githubassets.com/" crossorigin="">
  <link rel="preconnect" href="https://avatars.githubusercontent.com/">



  <link crossorigin="anonymous" media="all" integrity="sha512-d4XC7S3D2O/G0TvZjbbtWpDgCLyqvsXCX4K0DUJVfSwpV8ySOlchU43C/9mcyyHtCnczq4eoCl/e3fzC9uXxGA==" rel="stylesheet" href="./101-print_listint_safe_files/light-7785c2ed2dc3d8efc6d13bd98db6ed5a.css"><link crossorigin="anonymous" media="all" integrity="sha512-Bldh8KfOmuQXEarLeCx5IxrQms1DznU4qGbQ6oCrAVNdd4jea40lyBHdddi7o1P4dhler91XHyO9+iBe7m6LzQ==" rel="stylesheet" href="./101-print_listint_safe_files/dark_high_contrast-065761f0a7ce9ae41711aacb782c7923.css"><link data-color-theme="dark" crossorigin="anonymous" media="all" integrity="sha512-uEgC6AoKK1gK/XX3HlE4+2pdmfa3CUGgk9GV+7h+h0dtALsvueFLg+18JnwLD1axmkp744IzWjFcfHZTxmQyMQ==" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark-b84802e80a0a2b580afd75f71e5138fb.css"><link data-color-theme="dark_dimmed" crossorigin="anonymous" media="all" integrity="sha512-KQFKp2zcS4QM9du72skcYxPfuDslYljsOd9hsZFHSQl7WnkzjR0KkkuMbY7KFRWTerb8KbAYy11eD2ZoFgVyJg==" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_dimmed-29014aa76cdc4b840cf5dbbbdac91c63.css"><link data-color-theme="dark_colorblind" crossorigin="anonymous" media="all" integrity="sha512-eHFrYo8Bk54OL79J82xs3piY1rGcjSEJgFatv2yyt94w9+1uId7UyeMxmwiuxvhqBDBqYj5He5MWkzLwj+TczQ==" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_colorblind-78716b628f01939e0e2fbf49f36c6cde.css"><link data-color-theme="light_colorblind" crossorigin="anonymous" media="all" integrity="sha512-4B0zOHGKCF3VhiduN0P3tUdyrukJaYMOjDA3+oT+7Aht8hTQVyNdODvjyQUjM6Fg2uyid67gF0BphIVS19w5RQ==" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_colorblind-e01d3338718a085dd586276e3743f7b5.css">
  <link crossorigin="anonymous" media="all" integrity="sha512-pdsKnTx5DQsAIFl4LRo+6kToLThjqPiHwxtNpmJvTGEykcAT8/o5gMBJoH9mCjOlN2c9StfrDy69cqNklPIPDw==" rel="stylesheet" href="./101-print_listint_safe_files/frameworks-a5db0a9d3c790d0b002059782d1a3eea.css">
    <link crossorigin="anonymous" media="all" integrity="sha512-UgTwpV2BaAPM0fSjaZmILCjg4hjddZz0k6/Y9zG57vz+sDxI9eyWFNrhQSOOOCACHk7ooVE7lwMHrB1n/932iQ==" rel="stylesheet" href="./101-print_listint_safe_files/behaviors-5204f0a55d816803ccd1f4a36999882c.css">
    
    
    
    <link crossorigin="anonymous" media="all" integrity="sha512-bL4c+XJ+g0QcEE/0UOK3krjqMLiIqCKQa5MlRi3Qr2R/6wDZprnp/Vch6qi3vWqtnsCrbeUPiESzMqpG9Sm/ZQ==" rel="stylesheet" href="./101-print_listint_safe_files/github-6cbe1cf9727e83441c104ff450e2b792.css">

  <script crossorigin="anonymous" defer="defer" integrity="sha512-bd5GjqJFbZLxlG4FXlu80JVzUSEHzxtnyyS98c3BaPbl32yravYkO9dNLUeI5QOm1XU7zIzJ0J5HOEQSfkgJOA==" type="application/javascript" src="./101-print_listint_safe_files/environment-6dde468e.js.download"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-ddGNLPLaAF4LtFs1hgSG/HT64fJDjD0amTbHksv3EfeQPv6ckRw0aew6f93GS/wOqLhn2kNMb4HpQP8G8tcjRA==" type="application/javascript" src="./101-print_listint_safe_files/chunk-frameworks-75d18d2c.js.download"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-XiEP5VbZQ+tIpS96zqSTE71XJlhXKoWBhtVCjIGwiu8t/YCuy0lVWrkatlnLYFw9k4VZmJlM0iMDCXxs2R1pMA==" type="application/javascript" src="./101-print_listint_safe_files/chunk-vendor-5e210fe5.js.download"></script>
  
  <script crossorigin="anonymous" defer="defer" integrity="sha512-sW72Jnbg9Ush1qHXCWI73aV1m+TLpjupHG9wdHy1Tp2QKMmjBNKQC0mBzQAG1yLfqdjhA1pJN3WEeaHpzz8heg==" type="application/javascript" src="./101-print_listint_safe_files/behaviors-b16ef626.js.download"></script>
  
    <script crossorigin="anonymous" defer="defer" integrity="sha512-c99sZIyVeuMqCLPOEflJcpe5ZTLv4XTpv/RHIKSC75x3XaP5F2AYUOetvEjfyPVqG0UBzZ87npeIYC51tiQUlg==" type="application/javascript" data-module-id="./chunk-advanced.js" data-src="https://github.githubassets.com/assets/chunk-advanced-73df6c64.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-5tWKSr7mhAzSh4Sx5YRFgKftdGxKwHKnOGYw5DlxjHhkQVURYFU3Bk5IMOGMKuAiJTlC3OXYM3xzGcyjzuEFQQ==" type="application/javascript" data-module-id="./chunk-animate-on-scroll.js" data-src="https://github.githubassets.com/assets/chunk-animate-on-scroll-e6d58a4a.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-TZmyQZsVgQ09+4KQy2k1VBlEZhq2OE5WxeDunZ9Ud5nths0ySooBBDPMUzGB5bw1uvK2LKi2pdqF+6gN87QaMA==" type="application/javascript" data-module-id="./chunk-band.js" data-src="https://github.githubassets.com/assets/chunk-band-4d99b241.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-IG7+X4okt1ub1dW0zw7Phhab8ZA+BpX2I0dzn+Kd9Lsa/ehzimfn1SH47xwtDQ9EBWQItU6FfkdK1I/LKWsR/g==" type="application/javascript" data-module-id="./chunk-codemirror.js" data-src="https://github.githubassets.com/assets/chunk-codemirror-206efe5f.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-ol5y71RI6PxIzSuxVDnwevlSWZzk4bNc3O/EjhN5zfx6VPqcyDOAiN9CoTydwOZwe2K3Jmu+85/EV19h4A13Uw==" type="application/javascript" data-module-id="./chunk-color-modes.js" data-src="https://github.githubassets.com/assets/chunk-color-modes-a25e72ef.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-l/reD6UEw1TKt2Tb+/JckwEM9hy1QAlW9JUhRdzgFgLqT0IX5W0H/7o7taNNtUPl00wv3JgX3cE611sniV+sGA==" type="application/javascript" data-module-id="./chunk-community-contributions.js" data-src="https://github.githubassets.com/assets/chunk-community-contributions-97fade0f.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-DbpM4Xk+KtL8iCOI+ZACZGMdHN+r6aXCD2Wibv0FOD6mvDnGinYFYfj0BcPOrN5Ku2lJuhXylCh2wNDCLPBBeQ==" type="application/javascript" data-module-id="./chunk-confetti.js" data-src="https://github.githubassets.com/assets/chunk-confetti-0dba4ce1.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-4czyJUh5mQaRoD91+ywKbdzshmUh5mV/lfR1pN4UoAJgdv6jKohy4ECfaziOR2oqkr/HNvtPg+8GpBfrLBkPRw==" type="application/javascript" data-module-id="./chunk-contributions-spider-graph.js" data-src="https://github.githubassets.com/assets/chunk-contributions-spider-graph-e1ccf225.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-vpt2Tdt20tOKRtrRWtOVaRi2wBoAaflNGUR6xuQgU/0Ywfxvbazq0C2hhKwuiC8b6A813gXGm+8fj0NCEosbYQ==" type="application/javascript" data-module-id="./chunk-copy.js" src="./101-print_listint_safe_files/chunk-copy-be9b764d.js.download"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-arflMFcVzVAYaP2n7m7gklPChWsVsCDtRPav2Cb6bqLeJf8pgbojWJ3EseKXILCIqfxl/v6arBduZ9SLmpMEZw==" type="application/javascript" data-module-id="./chunk-delayed-loading-element.js" data-src="https://github.githubassets.com/assets/chunk-delayed-loading-element-6ab7e530.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-6j/oSF+kbW+yetNPvI684VzAu9pzug6Vj2h+3u1LdCuRhR4jnuiHZfeQKls3nxcT/S3H+oIt7FtigE/aeoj+gg==" type="application/javascript" data-module-id="./chunk-drag-drop.js" data-src="https://github.githubassets.com/assets/chunk-drag-drop-ea3fe848.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-VSSd+Yzi2iMS+pibY6hD/WdypxAEdob5F2RMKxuKcAHS2EpFYJPeTXoVxt0NXg03tfj2dka2mEtHS+vjpYSaDw==" type="application/javascript" data-module-id="./chunk-edit-hook-secret-element.js" data-src="https://github.githubassets.com/assets/chunk-edit-hook-secret-element-55249df9.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-ErqZFlIt7zIbLoZHvwfq9Zjo5zo+Y1A410nePDGvK+WVTVP10iNTfoqdOOSZNSy1gtLKIWDIIiOV30lr6zUJCA==" type="application/javascript" data-module-id="./chunk-edit.js" src="./101-print_listint_safe_files/chunk-edit-12ba9916.js.download"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-aiqMIGGZGo8AQMjcoImKPMTsZVVRl6htCSY7BpRmpGPG/AF+Wq+P/Oj/dthWQOIk9cCNMPEas7O2zAR6oqn0tA==" type="application/javascript" data-module-id="./chunk-emoji-picker-element.js" data-src="https://github.githubassets.com/assets/chunk-emoji-picker-element-6a2a8c20.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-US722XhUFp35/FptfGJ2nqbrP0eY87XrtM956Lhnf3HCW2KPJ2PawuGuPkZbZ/t2H16ooKkBV3sm2KyZDKYHJw==" type="application/javascript" data-module-id="./chunk-failbot.js" src="./101-print_listint_safe_files/chunk-failbot-512ef6d9.js.download"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-ZkvAlIhTXc2WIcJwCAZTzOMz8z0SY27Vuca0MKXovszcXpgqBzO0Q6XJxhMb/dnFXztr26ZsXTTmcfGbCfF+eg==" type="application/javascript" data-module-id="./chunk-feature-callout-element.js" data-src="https://github.githubassets.com/assets/chunk-feature-callout-element-664bc094.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-OszE/6GlmrYt3ALid4xVFd3/4d9cUH08ndFsO7vs/RHCz2bJ8+UsbjBc8wf09hyCOe9PuEgW0HDWpD32xMio2Q==" type="application/javascript" data-module-id="./chunk-filter-input.js" data-src="https://github.githubassets.com/assets/chunk-filter-input-3accc4ff.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-IQ2M6xzXXV7QIRlurBrGu6LpQwoJVB6RGcPYn7k402DSnOW3dLW9fq7T1PZQagyDvuPxGGPJR8p+EpXcwdaR6w==" type="application/javascript" data-module-id="./chunk-get-repo-element.js" src="./101-print_listint_safe_files/chunk-get-repo-element-210d8ceb.js.download"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-iu+7rQ4zjgS0Kh7yOzOGJKnPiSTW+NXctHe99VLYWefPCH81OdCYJNXNgrwwozzZ6611kkhLwlYsbug5IDcw/A==" type="application/javascript" data-module-id="./chunk-insights-query.js" data-src="https://github.githubassets.com/assets/chunk-insights-query-8aefbbad.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-hjk2dx6xfQb6AuTdNDPZtPN4Af6jynNBB7FRPppySkqM2PjoNzn7gHclutvXr6JV1XIrkR8IvPetqP+6U04OnA==" type="application/javascript" data-module-id="./chunk-invitations.js" data-src="https://github.githubassets.com/assets/chunk-invitations-86393677.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-3w6AbblSrP+0vEnuDuy2UamufZZV+fIMtCLSr/4+LvdcVWRyYNCBOv4PwNXYR18XH5AKGY70o6mx9ItWKgV5lg==" type="application/javascript" data-module-id="./chunk-jump-to.js" data-src="https://github.githubassets.com/assets/chunk-jump-to-df0e806d.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-3q9CgTtVlQ6fkBQRgpwkwOZ+3tHjtGqOJeAI+Vp4bbcig2h1mR9iRJG2ohClN8+YThWAOBxizc8R/yrZPbxNSw==" type="application/javascript" data-module-id="./chunk-launch-code-element.js" data-src="https://github.githubassets.com/assets/chunk-launch-code-element-deaf4281.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-m2VwI1wpMT5jpAzQLL7sVG0WkxzNAiBXeitEnh0A2tUHb+r4sVRzoR8PAyf0+zUkEDO5Ne5DBWO7gM2FtdT7cw==" type="application/javascript" data-module-id="./chunk-line-chart.js" data-src="https://github.githubassets.com/assets/chunk-line-chart-9b657023.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-OzQIaiJ/pQbksQrzB0te7gNlSDIOYyKs/TgLA7ld8rKE5WNT5FxOhy2cjribgMzuOvrDX+ETFp6NvesIq/4RVA==" type="application/javascript" data-module-id="./chunk-line.js" data-src="https://github.githubassets.com/assets/chunk-line-3b34086a.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-7G7VNhRoIxfK6aKTgUSUtMHI6U0k+szgDfwZIEcKuQKs+K0XZGfVivusB0NlOy78zixfFSI7NHzmvHike+5uyQ==" type="application/javascript" data-module-id="./chunk-metric-selection-element.js" data-src="https://github.githubassets.com/assets/chunk-metric-selection-element-ec6ed536.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-itd9nrOOY2Ya/U6KKraiShXuwuiOyQF6GYHaIL2Qr4ZBtRKox9WWGluHogkzuMJM6i7JYvpoeMyPqVudJvIZWg==" type="application/javascript" data-module-id="./chunk-notification-list-focus.js" src="./101-print_listint_safe_files/chunk-notification-list-focus-8ad77d9e.js.download"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-6enCyHc2oDBJwiPQyY9iU3K8QWghVdO8pj8IweUrouWSmW8rP8N0e1VCUWpu7Q9SVJBC86naRr3WqKLbtkhHUQ==" type="application/javascript" data-module-id="./chunk-overview.js" src="./101-print_listint_safe_files/chunk-overview-e9e9c2c8.js.download"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-Av65L2HA84wzeJh2rkcqqc1PFzlpLUCbvpHm9kPIp8aM4rUCq0Aot66ruui6qvUT71HxvBkSmJAzhBF620Hh+Q==" type="application/javascript" data-module-id="./chunk-premium-runners.js" data-src="https://github.githubassets.com/assets/chunk-premium-runners-02feb92f.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-wXlv/QM4OsXYyUuSfFjx3XqSmvfLqtjvBx6wFlGNmHzd6Dkmr1HkTZs1qpCYTCjiyw1zm5ORa4O4gWAKc+cKPw==" type="application/javascript" data-module-id="./chunk-presence-avatars.js" data-src="https://github.githubassets.com/assets/chunk-presence-avatars-c1796ffd.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-4O3AMK3FmKoTDmbBwFGIg+rNW3s73lJFQNLSBF1bczsjNsi8zT2t54vTwY1cMG1dox6Nt11wRGhevi1wxOFhWw==" type="application/javascript" data-module-id="./chunk-profile-pins-element.js" data-src="https://github.githubassets.com/assets/chunk-profile-pins-element-e0edc030.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-hgoSKLTlL8I3IWr/TLONCU+N4kdCtdrHCrrud4NKhgRlLrTw0XUPhqBaDdZUiFSzDQRw/nFQ1kw2VeTm0g9+lA==" type="application/javascript" data-module-id="./chunk-profile.js" data-src="https://github.githubassets.com/assets/chunk-profile-860a1228.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-hDIkBdamKUu7fyTC8EjEaF3RvMSQdsZ/W2uKwyDbPuaKeW2156i0M10WcK6+niteqznTM2J9b08+EkPJGkg2zA==" type="application/javascript" data-module-id="./chunk-pulse-authors-graph-element.js" data-src="https://github.githubassets.com/assets/chunk-pulse-authors-graph-element-84322405.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-YdISPiW9Vx/QJU6fosa4r5ohI83iO+8Q0PXsLaH/tdHnk6zr6HVkdU/HqvoqIQKBDGPJ/ODACbirDQjGfSQXwg==" type="application/javascript" data-module-id="./chunk-readme-toc-element.js" data-src="https://github.githubassets.com/assets/chunk-readme-toc-element-61d2123e.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-rhladi60G4WRCtFkJAErIB32DBQt6BIMuzFRR0wJ68nWcqex4+C5Xb62rsOSNdluP3kuaSyWT3GTLCDSLv5jIA==" type="application/javascript" data-module-id="./chunk-ref-selector.js" src="./101-print_listint_safe_files/chunk-ref-selector-ae195a76.js.download"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-hzhWJlLw3wWm4u/z9EoY6el+S6Pk85+5rIyXGQ8GcJ1yEtk70Jq4dvzaWM/YSUIhOGnnAWit+3Uv+3+B433e9A==" type="application/javascript" data-module-id="./chunk-remote-clipboard-copy.js" src="./101-print_listint_safe_files/chunk-remote-clipboard-copy-87385626.js.download"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-jm6EWfguX4365FL+l+k2N5KTMd9hHbt9/5HjBn7x/enRZYl/mLqAsCbmfqGyv9TVpPuu8jVoZCdXYCVBbSDlfw==" type="application/javascript" data-module-id="./chunk-responsive-underlinenav.js" src="./101-print_listint_safe_files/chunk-responsive-underlinenav-8e6e8459.js.download"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-8EhI56c+WrEr07oNcFy+Q329w5+DQVhB2TO9e0bT/TxnooHtwze/OanZof/+zDJxW7RbYY2pzRVwLRvoJRHUrA==" type="application/javascript" data-module-id="./chunk-runner-groups.js" data-src="https://github.githubassets.com/assets/chunk-runner-groups-f04848e7.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-fDNA1jZjxFyXNVY10A8BfaZE/vpXhcnOI23xRlVWDJwmLsDsGm+5fedVhSPI9xxWfAVd9x6dFgZ0wzJRhFo3Rw==" type="application/javascript" data-module-id="./chunk-series-table.js" data-src="https://github.githubassets.com/assets/chunk-series-table-7c3340d6.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-bjSP8StMagdENf3/Xy8fkbUePS7vNbw+2hpgg0tne7zm/eiz3b1mM0XthFTSfxhO9QHFD8wO/hOCcbnORvN3NA==" type="application/javascript" data-module-id="./chunk-severity-calculator-element.js" data-src="https://github.githubassets.com/assets/chunk-severity-calculator-element-6e348ff1.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-0x8YGuZvegnDlzFiJOTIk2yWq2XMsKozVvA/Q22rrRVB7DaNCfs5NX7CgIMjPl090FS6fdaPNBJ4RBycCylZfg==" type="application/javascript" data-module-id="./chunk-slug.js" data-src="https://github.githubassets.com/assets/chunk-slug-d31f181a.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-PWX4U7gXw3ZCMaWeIgREnOs6QhXlsvpTNxCAOpz2KxCrhLE1MtGgPoYuW/QP1Pz/318/vJ6tu+/Y0VM8pHgGpQ==" type="application/javascript" data-module-id="./chunk-sortable-behavior.js" data-src="https://github.githubassets.com/assets/chunk-sortable-behavior-3d65f853.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-C3U3HnwiUvSh7M/rM5QPvZLDbwSOKR2X1NklwD8iBYZsyUwn6vxGXP9SGi0wQnFpH9hxhUhRciPkANRv1dCUPw==" type="application/javascript" data-module-id="./chunk-stacked-area-chart.js" data-src="https://github.githubassets.com/assets/chunk-stacked-area-chart-0b75371e.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-8TsnffhpiAky+t0hTgUdQT6yITtiEmNbbOa4HNW94WldEKqeJ3gcoZUHJOP1NbeUvvjzYu0FKO1KvOTYh6t1Jw==" type="application/javascript" data-module-id="./chunk-stacks-input-config-view.js" data-src="https://github.githubassets.com/assets/chunk-stacks-input-config-view-f13b277d.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-DEQRP/uzEpLuk0GmKzm+b2u9bkX0r7abp0sgC+SUTrNOqrsw8+CGCMZRRrDb9doy7agSbXt2PnJkltf1uE8oGQ==" type="application/javascript" data-module-id="./chunk-tag-input.js" src="./101-print_listint_safe_files/chunk-tag-input-0c44113f.js.download"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-+ghwIHl4WoTIKefFnsS00RF8wYc+3MqK4eEh1Rst68581JyTbm7O1RxzJjjzlXscQC81/zl70xwhc+SjdReoIA==" type="application/javascript" data-module-id="./chunk-three.module.js" data-src="https://github.githubassets.com/assets/chunk-three.module-fa087020.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-nSaImYvyCFHYd5FJhGCYT8wSQKSl02zyse6g1fuhudwg5fTdZobA8nr78/yRn7Qti0TTLBvzDdKHKR1mHjyfPA==" type="application/javascript" data-module-id="./chunk-tip.js" data-src="https://github.githubassets.com/assets/chunk-tip-9d268899.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-WK8VXw3lfUQ/VRW0zlgKPhcMUqH0uTnB/KzePUPdZhCm/HpxfXXHKTGvj5C0Oex7+zbIM2ECzULbtTCT4ug3yg==" type="application/javascript" data-module-id="./chunk-toast.js" data-src="https://github.githubassets.com/assets/chunk-toast-58af155f.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-iRmcpP9fh69acP+08Xq+lQ9CM5cBtktQWsR4+DEuVVXBn4oIggmAe3f75XNluFiK9WOePPUnw5cGq+Q7UoGoZg==" type="application/javascript" data-module-id="./chunk-tweetsodium.js" data-src="https://github.githubassets.com/assets/chunk-tweetsodium-89199ca4.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-fvcOOYapCxPkDRQWz2WQzrqL6rRhX88yHWF87fb9Xny2Fq4lri0ONaVFL7XDSTiTyu4OTp+8WoyfMVpgGUaaVg==" type="application/javascript" data-module-id="./chunk-unveil.js" data-src="https://github.githubassets.com/assets/chunk-unveil-7ef70e39.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-T0fzgeOPE6IE3ghFMtzzyObqyhE/iolaIBkeO7LsK4mcn/ivHuIrZYYdinXiupYjUI0WoUyMhzmoY5YPshkOZg==" type="application/javascript" data-module-id="./chunk-user-status-submit.js" data-src="https://github.githubassets.com/assets/chunk-user-status-submit-4f47f381.js"></script>
    <script crossorigin="anonymous" defer="defer" integrity="sha512-wQnjXBFgueIl3c4MJVGGbqMThHgUcsOVtWP3vsLqqjRdtPae9B/fXj91Ow2UyzOF3b28lFfDi3jCyrJ+0oc/5g==" type="application/javascript" data-module-id="./chunk-webgl-warp.js" data-src="https://github.githubassets.com/assets/chunk-webgl-warp-c109e35c.js"></script>
  
  <script crossorigin="anonymous" defer="defer" integrity="sha512-pkEpAFoJ78YAJHdqorBvPicgDFj+kNlBXjHob3f2osapUKrBq75bN6g8Yp+m1VXXq6L+l+HnOaG25D0gwBVkmg==" type="application/javascript" src="./101-print_listint_safe_files/repositories-a6412900.js.download"></script>
<script crossorigin="anonymous" defer="defer" integrity="sha512-W+eawFjTPZX5ABMEOVW0lUJ0M1q6JItot+QB/CU3QwNMq1KvtlpSHb7I3qsR+Pe3dfSvI7LADZbMoVMpPsG3Dg==" type="application/javascript" src="./101-print_listint_safe_files/diffs-5be79ac0.js.download"></script>

  <meta name="viewport" content="width=device-width">
  
  <title>alx-low_level_programming/101-print_listint_safe.c at master · denis-kiprop/alx-low_level_programming</title>
    <meta name="description" content="Contribute to denis-kiprop/alx-low_level_programming development by creating an account on GitHub.">
    <link rel="search" type="application/opensearchdescription+xml" href="https://github.com/opensearch.xml" title="GitHub">
  <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">
  <meta name="apple-itunes-app" content="app-id=1477376905">
    <meta name="twitter:image:src" content="https://opengraph.githubassets.com/2da17ed72d2ab666ff46d82f384a6c06dd1b99c167974daa2163815c5a135ff7/denis-kiprop/alx-low_level_programming"><meta name="twitter:site" content="@github"><meta name="twitter:card" content="summary_large_image"><meta name="twitter:title" content="alx-low_level_programming/101-print_listint_safe.c at master · denis-kiprop/alx-low_level_programming"><meta name="twitter:description" content="Contribute to denis-kiprop/alx-low_level_programming development by creating an account on GitHub.">
    <meta property="og:image" content="https://opengraph.githubassets.com/2da17ed72d2ab666ff46d82f384a6c06dd1b99c167974daa2163815c5a135ff7/denis-kiprop/alx-low_level_programming"><meta property="og:image:alt" content="Contribute to denis-kiprop/alx-low_level_programming development by creating an account on GitHub."><meta property="og:image:width" content="1200"><meta property="og:image:height" content="600"><meta property="og:site_name" content="GitHub"><meta property="og:type" content="object"><meta property="og:title" content="alx-low_level_programming/101-print_listint_safe.c at master · denis-kiprop/alx-low_level_programming"><meta property="og:url" content="https://github.com/denis-kiprop/alx-low_level_programming"><meta property="og:description" content="Contribute to denis-kiprop/alx-low_level_programming development by creating an account on GitHub.">
    



    

  <link rel="assets" href="https://github.githubassets.com/">
    <link rel="shared-web-socket" href="wss://alive.github.com/_sockets/u/84763233/ws?session=eyJ2IjoiVjMiLCJ1Ijo4NDc2MzIzMywicyI6NzQxMjYyMTQzLCJjIjozOTQ5OTY0NzA4LCJ0IjoxNjM0MDU3MzU4fQ==--f832943c26c9324264aaa5e44638802c895c33cf3acbe48aec3c736dcad06e20" data-refresh-url="/_alive" data-session-id="2a09e0a1e1ee188fcf0a9bed8f31ccfa4ff67eeb5dc891408adefdbb88467761">
    <link rel="shared-web-socket-src" href="https://github.com/assets-cdn/worker/socket-worker-0af8a29d.js">
  <link rel="sudo-modal" href="https://github.com/sessions/sudo_modal">

  <meta name="request-id" content="BD73:305B:33D9A3:366CFE:6165BC8C" data-pjax-transient="true"><meta name="html-safe-nonce" content="c45d39fa8c7bf8fa7de78f5413235e37ebaff7c9ce4452a9d4b2b4d80826c056" data-pjax-transient="true"><meta name="visitor-payload" content="eyJyZWZlcnJlciI6Imh0dHBzOi8vZ2l0aHViLmNvbS9kZW5pcy1raXByb3AvYWx4LWxvd19sZXZlbF9wcm9ncmFtbWluZy90cmVlL21hc3Rlci8weDEzLW1vcmVfc2luZ2x5X2xpbmtlZF9saXN0cyIsInJlcXVlc3RfaWQiOiJCRDczOjMwNUI6MzNEOUEzOjM2NkNGRTo2MTY1QkM4QyIsInZpc2l0b3JfaWQiOiI4Mjk1ODI0NDM3MzE0MzY4NDgzIiwicmVnaW9uX2VkZ2UiOiJmcmEiLCJyZWdpb25fcmVuZGVyIjoiaWFkIn0=" data-pjax-transient="true"><meta name="visitor-hmac" content="6bed3e6544e5e85ec9be8dc2bfe611eb1768b03e95326bd6c163f555961a6a8f" data-pjax-transient="true">

    <meta name="hovercard-subject-tag" content="repository:400076709" data-pjax-transient="">


  <meta name="github-keyboard-shortcuts" content="repository,source-code" data-pjax-transient="true">

  

  <meta name="selected-link" value="repo_source" data-pjax-transient="">

    <meta name="google-site-verification" content="c1kuD-K2HIVF635lypcsWPoD4kilo5-jA_wBFyT4uMY">
  <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
  <meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
  <meta name="google-site-verification" content="GXs5KoUUkNCoaAZn7wPN-t01Pywp9M3sEjnt_3_ZWPc">

<meta name="octolytics-host" content="collector.githubapp.com"><meta name="octolytics-app-id" content="github"><meta name="octolytics-event-url" content="https://collector.githubapp.com/github-external/browser_event"><meta name="octolytics-actor-id" content="84763233"><meta name="octolytics-actor-login" content="kaleabtdk"><meta name="octolytics-actor-hash" content="1ac4a4acc7c2c903bd228189038c58ab80442efdc0dede4e91793330ecd7ce6b">

  <meta name="analytics-location" content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true">

  



  <meta name="optimizely-datafile" content="{&quot;version&quot;: &quot;4&quot;, &quot;rollouts&quot;: [], &quot;typedAudiences&quot;: [], &quot;anonymizeIP&quot;: true, &quot;projectId&quot;: &quot;16737760170&quot;, &quot;variables&quot;: [], &quot;featureFlags&quot;: [], &quot;experiments&quot;: [{&quot;status&quot;: &quot;Running&quot;, &quot;audienceIds&quot;: [], &quot;variations&quot;: [{&quot;variables&quot;: [], &quot;id&quot;: &quot;20438636352&quot;, &quot;key&quot;: &quot;control&quot;}, {&quot;variables&quot;: [], &quot;id&quot;: &quot;20484957397&quot;, &quot;key&quot;: &quot;treatment&quot;}], &quot;id&quot;: &quot;20479227424&quot;, &quot;key&quot;: &quot;growth_ghec_onboarding_experience&quot;, &quot;layerId&quot;: &quot;20467848595&quot;, &quot;trafficAllocation&quot;: [{&quot;entityId&quot;: &quot;20484957397&quot;, &quot;endOfRange&quot;: 1000}, {&quot;entityId&quot;: &quot;20438636352&quot;, &quot;endOfRange&quot;: 3000}, {&quot;entityId&quot;: &quot;20484957397&quot;, &quot;endOfRange&quot;: 5000}, {&quot;entityId&quot;: &quot;20484957397&quot;, &quot;endOfRange&quot;: 6000}, {&quot;entityId&quot;: &quot;20484957397&quot;, &quot;endOfRange&quot;: 8000}, {&quot;entityId&quot;: &quot;20484957397&quot;, &quot;endOfRange&quot;: 10000}], &quot;forcedVariations&quot;: {}}, {&quot;status&quot;: &quot;Running&quot;, &quot;audienceIds&quot;: [], &quot;variations&quot;: [{&quot;variables&quot;: [], &quot;id&quot;: &quot;20508232513&quot;, &quot;key&quot;: &quot;control&quot;}, {&quot;variables&quot;: [], &quot;id&quot;: &quot;20533742085&quot;, &quot;key&quot;: &quot;treatment&quot;}], &quot;id&quot;: &quot;20512531891&quot;, &quot;key&quot;: &quot;growth_pull_request_actions_prompt&quot;, &quot;layerId&quot;: &quot;20529822202&quot;, &quot;trafficAllocation&quot;: [{&quot;entityId&quot;: &quot;20533742085&quot;, &quot;endOfRange&quot;: 5000}, {&quot;entityId&quot;: &quot;20508232513&quot;, &quot;endOfRange&quot;: 10000}], &quot;forcedVariations&quot;: {}}, {&quot;status&quot;: &quot;Running&quot;, &quot;audienceIds&quot;: [], &quot;variations&quot;: [{&quot;variables&quot;: [], &quot;id&quot;: &quot;20543572345&quot;, &quot;key&quot;: &quot;control&quot;}, {&quot;variables&quot;: [], &quot;id&quot;: &quot;20510876757&quot;, &quot;key&quot;: &quot;treatment&quot;}], &quot;id&quot;: &quot;20518037255&quot;, &quot;key&quot;: &quot;growth_issue_actions_prompt&quot;, &quot;layerId&quot;: &quot;20522524291&quot;, &quot;trafficAllocation&quot;: [{&quot;entityId&quot;: &quot;20510876757&quot;, &quot;endOfRange&quot;: 5000}, {&quot;entityId&quot;: &quot;20543572345&quot;, &quot;endOfRange&quot;: 10000}], &quot;forcedVariations&quot;: {}}, {&quot;status&quot;: &quot;Running&quot;, &quot;audienceIds&quot;: [], &quot;variations&quot;: [{&quot;variables&quot;: [], &quot;id&quot;: &quot;20619540113&quot;, &quot;key&quot;: &quot;control&quot;}, {&quot;variables&quot;: [], &quot;id&quot;: &quot;20598530123&quot;, &quot;key&quot;: &quot;treatment&quot;}], &quot;id&quot;: &quot;20619150105&quot;, &quot;key&quot;: &quot;dynamic_seats&quot;, &quot;layerId&quot;: &quot;20615170077&quot;, &quot;trafficAllocation&quot;: [{&quot;entityId&quot;: &quot;20598530123&quot;, &quot;endOfRange&quot;: 5000}, {&quot;entityId&quot;: &quot;20619540113&quot;, &quot;endOfRange&quot;: 10000}], &quot;forcedVariations&quot;: {}}], &quot;audiences&quot;: [{&quot;conditions&quot;: &quot;[\&quot;or\&quot;, {\&quot;match\&quot;: \&quot;exact\&quot;, \&quot;name\&quot;: \&quot;$opt_dummy_attribute\&quot;, \&quot;type\&quot;: \&quot;custom_attribute\&quot;, \&quot;value\&quot;: \&quot;$opt_dummy_value\&quot;}]&quot;, &quot;id&quot;: &quot;$opt_dummy_audience&quot;, &quot;name&quot;: &quot;Optimizely-Generated Audience for Backwards Compatibility&quot;}], &quot;groups&quot;: [], &quot;sdkKey&quot;: &quot;WTc6awnGuYDdG98CYRban&quot;, &quot;environmentKey&quot;: &quot;production&quot;, &quot;attributes&quot;: [{&quot;id&quot;: &quot;16822470375&quot;, &quot;key&quot;: &quot;user_id&quot;}, {&quot;id&quot;: &quot;17143601254&quot;, &quot;key&quot;: &quot;spammy&quot;}, {&quot;id&quot;: &quot;18175660309&quot;, &quot;key&quot;: &quot;organization_plan&quot;}, {&quot;id&quot;: &quot;18813001570&quot;, &quot;key&quot;: &quot;is_logged_in&quot;}, {&quot;id&quot;: &quot;19073851829&quot;, &quot;key&quot;: &quot;geo&quot;}, {&quot;id&quot;: &quot;20175462351&quot;, &quot;key&quot;: &quot;requestedCurrency&quot;}], &quot;botFiltering&quot;: false, &quot;accountId&quot;: &quot;16737760170&quot;, &quot;events&quot;: [{&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;17911811441&quot;, &quot;key&quot;: &quot;hydro_click.dashboard.teacher_toolbox_cta&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18124116703&quot;, &quot;key&quot;: &quot;submit.organizations.complete_sign_up&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18145892387&quot;, &quot;key&quot;: &quot;no_metric.tracked_outside_of_optimizely&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18178755568&quot;, &quot;key&quot;: &quot;click.org_onboarding_checklist.add_repo&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18180553241&quot;, &quot;key&quot;: &quot;submit.repository_imports.create&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18186103728&quot;, &quot;key&quot;: &quot;click.help.learn_more_about_repository_creation&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18188530140&quot;, &quot;key&quot;: &quot;test_event.do_not_use_in_production&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18191963644&quot;, &quot;key&quot;: &quot;click.empty_org_repo_cta.transfer_repository&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18195612788&quot;, &quot;key&quot;: &quot;click.empty_org_repo_cta.import_repository&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18210945499&quot;, &quot;key&quot;: &quot;click.org_onboarding_checklist.invite_members&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18211063248&quot;, &quot;key&quot;: &quot;click.empty_org_repo_cta.create_repository&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18215721889&quot;, &quot;key&quot;: &quot;click.org_onboarding_checklist.update_profile&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18224360785&quot;, &quot;key&quot;: &quot;click.org_onboarding_checklist.dismiss&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18234832286&quot;, &quot;key&quot;: &quot;submit.organization_activation.complete&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18252392383&quot;, &quot;key&quot;: &quot;submit.org_repository.create&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18257551537&quot;, &quot;key&quot;: &quot;submit.org_member_invitation.create&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18259522260&quot;, &quot;key&quot;: &quot;submit.organization_profile.update&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18564603625&quot;, &quot;key&quot;: &quot;view.classroom_select_organization&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18568612016&quot;, &quot;key&quot;: &quot;click.classroom_sign_in_click&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18572592540&quot;, &quot;key&quot;: &quot;view.classroom_name&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18574203855&quot;, &quot;key&quot;: &quot;click.classroom_create_organization&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18582053415&quot;, &quot;key&quot;: &quot;click.classroom_select_organization&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18589463420&quot;, &quot;key&quot;: &quot;click.classroom_create_classroom&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18591323364&quot;, &quot;key&quot;: &quot;click.classroom_create_first_classroom&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18591652321&quot;, &quot;key&quot;: &quot;click.classroom_grant_access&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;18607131425&quot;, &quot;key&quot;: &quot;view.classroom_creation&quot;}, {&quot;experimentIds&quot;: [&quot;20479227424&quot;, &quot;20619150105&quot;], &quot;id&quot;: &quot;18831680583&quot;, &quot;key&quot;: &quot;upgrade_account_plan&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19064064515&quot;, &quot;key&quot;: &quot;click.signup&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19075373687&quot;, &quot;key&quot;: &quot;click.view_account_billing_page&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19077355841&quot;, &quot;key&quot;: &quot;click.dismiss_signup_prompt&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19079713938&quot;, &quot;key&quot;: &quot;click.contact_sales&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19120963070&quot;, &quot;key&quot;: &quot;click.compare_account_plans&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19151690317&quot;, &quot;key&quot;: &quot;click.upgrade_account_cta&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19424193129&quot;, &quot;key&quot;: &quot;click.open_account_switcher&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19520330825&quot;, &quot;key&quot;: &quot;click.visit_account_profile&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19540970635&quot;, &quot;key&quot;: &quot;click.switch_account_context&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19730198868&quot;, &quot;key&quot;: &quot;submit.homepage_signup&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19820830627&quot;, &quot;key&quot;: &quot;click.homepage_signup&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;19988571001&quot;, &quot;key&quot;: &quot;click.create_enterprise_trial&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20036538294&quot;, &quot;key&quot;: &quot;click.create_organization_team&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20040653299&quot;, &quot;key&quot;: &quot;click.input_enterprise_trial_form&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20062030003&quot;, &quot;key&quot;: &quot;click.continue_with_team&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20068947153&quot;, &quot;key&quot;: &quot;click.create_organization_free&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20086636658&quot;, &quot;key&quot;: &quot;click.signup_continue.username&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20091648988&quot;, &quot;key&quot;: &quot;click.signup_continue.create_account&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20103637615&quot;, &quot;key&quot;: &quot;click.signup_continue.email&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20111574253&quot;, &quot;key&quot;: &quot;click.signup_continue.password&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20120044111&quot;, &quot;key&quot;: &quot;view.pricing_page&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20152062109&quot;, &quot;key&quot;: &quot;submit.create_account&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20165800992&quot;, &quot;key&quot;: &quot;submit.upgrade_payment_form&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20171520319&quot;, &quot;key&quot;: &quot;submit.create_organization&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20222645674&quot;, &quot;key&quot;: &quot;click.recommended_plan_in_signup.discuss_your_needs&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20227443657&quot;, &quot;key&quot;: &quot;submit.verify_primary_user_email&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20234607160&quot;, &quot;key&quot;: &quot;click.recommended_plan_in_signup.try_enterprise&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20238175784&quot;, &quot;key&quot;: &quot;click.recommended_plan_in_signup.team&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20239847212&quot;, &quot;key&quot;: &quot;click.recommended_plan_in_signup.continue_free&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20251097193&quot;, &quot;key&quot;: &quot;recommended_plan&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20438619534&quot;, &quot;key&quot;: &quot;click.pricing_calculator.1_member&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20456699683&quot;, &quot;key&quot;: &quot;click.pricing_calculator.15_members&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20467868331&quot;, &quot;key&quot;: &quot;click.pricing_calculator.10_members&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20476267432&quot;, &quot;key&quot;: &quot;click.trial_days_remaining&quot;}, {&quot;experimentIds&quot;: [&quot;20479227424&quot;], &quot;id&quot;: &quot;20476357660&quot;, &quot;key&quot;: &quot;click.discover_feature&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20479287901&quot;, &quot;key&quot;: &quot;click.pricing_calculator.custom_members&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20481107083&quot;, &quot;key&quot;: &quot;click.recommended_plan_in_signup.apply_teacher_benefits&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20483089392&quot;, &quot;key&quot;: &quot;click.pricing_calculator.5_members&quot;}, {&quot;experimentIds&quot;: [&quot;20479227424&quot;], &quot;id&quot;: &quot;20484283944&quot;, &quot;key&quot;: &quot;click.onboarding_task&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20484996281&quot;, &quot;key&quot;: &quot;click.recommended_plan_in_signup.apply_student_benefits&quot;}, {&quot;experimentIds&quot;: [&quot;20479227424&quot;], &quot;id&quot;: &quot;20486713726&quot;, &quot;key&quot;: &quot;click.onboarding_task_breadcrumb&quot;}, {&quot;experimentIds&quot;: [&quot;20479227424&quot;], &quot;id&quot;: &quot;20490791319&quot;, &quot;key&quot;: &quot;click.upgrade_to_enterprise&quot;}, {&quot;experimentIds&quot;: [&quot;20479227424&quot;], &quot;id&quot;: &quot;20491786766&quot;, &quot;key&quot;: &quot;click.talk_to_us&quot;}, {&quot;experimentIds&quot;: [&quot;20479227424&quot;], &quot;id&quot;: &quot;20494144087&quot;, &quot;key&quot;: &quot;click.dismiss_enterprise_trial&quot;}, {&quot;experimentIds&quot;: [&quot;20479227424&quot;], &quot;id&quot;: &quot;20499722759&quot;, &quot;key&quot;: &quot;completed_all_tasks&quot;}, {&quot;experimentIds&quot;: [&quot;20479227424&quot;], &quot;id&quot;: &quot;20500710104&quot;, &quot;key&quot;: &quot;completed_onboarding_tasks&quot;}, {&quot;experimentIds&quot;: [&quot;20479227424&quot;], &quot;id&quot;: &quot;20513160672&quot;, &quot;key&quot;: &quot;click.read_doc&quot;}, {&quot;experimentIds&quot;: [&quot;20512531891&quot;], &quot;id&quot;: &quot;20516196762&quot;, &quot;key&quot;: &quot;actions_enabled&quot;}, {&quot;experimentIds&quot;: [&quot;20479227424&quot;], &quot;id&quot;: &quot;20518980986&quot;, &quot;key&quot;: &quot;click.dismiss_trial_banner&quot;}, {&quot;experimentIds&quot;: [&quot;20518037255&quot;], &quot;id&quot;: &quot;20535446721&quot;, &quot;key&quot;: &quot;click.issue_actions_prompt.dismiss_prompt&quot;}, {&quot;experimentIds&quot;: [&quot;20518037255&quot;], &quot;id&quot;: &quot;20557002247&quot;, &quot;key&quot;: &quot;click.issue_actions_prompt.setup_workflow&quot;}, {&quot;experimentIds&quot;: [&quot;20512531891&quot;], &quot;id&quot;: &quot;20595070227&quot;, &quot;key&quot;: &quot;click.pull_request_setup_workflow&quot;}, {&quot;experimentIds&quot;: [&quot;20619150105&quot;], &quot;id&quot;: &quot;20626600314&quot;, &quot;key&quot;: &quot;click.seats_input&quot;}, {&quot;experimentIds&quot;: [&quot;20619150105&quot;], &quot;id&quot;: &quot;20642310305&quot;, &quot;key&quot;: &quot;click.decrease_seats_number&quot;}, {&quot;experimentIds&quot;: [&quot;20619150105&quot;], &quot;id&quot;: &quot;20662990045&quot;, &quot;key&quot;: &quot;click.increase_seats_number&quot;}, {&quot;experimentIds&quot;: [], &quot;id&quot;: &quot;20679620969&quot;, &quot;key&quot;: &quot;click.public_product_roadmap&quot;}, {&quot;experimentIds&quot;: [&quot;20479227424&quot;], &quot;id&quot;: &quot;20761240940&quot;, &quot;key&quot;: &quot;click.dismiss_survey_banner&quot;}, {&quot;experimentIds&quot;: [&quot;20479227424&quot;], &quot;id&quot;: &quot;20767210721&quot;, &quot;key&quot;: &quot;click.take_survey&quot;}], &quot;revision&quot;: &quot;911&quot;}">
  <!-- To prevent page flashing, the optimizely JS needs to be loaded in the
    <head> tag before the DOM renders -->
  <script crossorigin="anonymous" defer="defer" integrity="sha512-vTC+TV2rkXCHvBJUAVliNME9tN9eRh0Dxyhls9EtDuoPfx3VeYlxvCBmxbWQwvmE0rd67YETf8rDK9OI8hpUOQ==" type="application/javascript" src="./101-print_listint_safe_files/optimizely-bd30be4d.js.download"></script>



  

      <meta name="hostname" content="github.com">
    <meta name="user-login" content="kaleabtdk">


      <meta name="expected-hostname" content="github.com">

      <meta name="js-proxy-site-detection-payload" content="NDdjYzEzZWQyMDhmNDk3YjVkZGMxYzBmY2M5NjkwZDkzN2VmYzhmYTZlNDFjYWEwZDAwNjNhZjk3ZWUwNWIzM3x7InJlbW90ZV9hZGRyZXNzIjoiMTk3LjE1Ni44Ni4xOTEiLCJyZXF1ZXN0X2lkIjoiQkQ3MzozMDVCOjMzRDlBMzozNjZDRkU6NjE2NUJDOEMiLCJ0aW1lc3RhbXAiOjE2MzQwNTczNTgsImhvc3QiOiJnaXRodWIuY29tIn0=">
      <meta name="keyboard-shortcuts-preference" content="all">
      <script type="application/json" id="memex_keyboard_shortcuts_preference">"all"</script>

    <meta name="enabled-features" content="ACTIONS_CALLABLE_WORKFLOWS,BRANCH_PROTECTION_RULE_WEBHOOK,MARKETPLACE_PENDING_INSTALLATIONS,FILE_UPLOAD_CURSOR_POSITION">

  <meta http-equiv="x-pjax-version" content="5ab97559dac538d0c33a56d7eb12e4df5cd313a689054df48a53f428154a4e6e">
  <meta http-equiv="x-pjax-csp-version" content="12226f24431227cd683c352ed3b230e9eff6b985f7242170cb52dcfeaaadef5e">
  <meta http-equiv="x-pjax-css-version" content="a10155618e3e8d7cec497d76acde1866058eecbfeee5171de2ac4ce9a9b36ee5">
  <meta http-equiv="x-pjax-js-version" content="22d2dfb4a936810c1bba697331f6ebe91d3ef93bf8166ec65aa7361243fc0a44">
  

    
  <meta name="go-import" content="github.com/denis-kiprop/alx-low_level_programming git https://github.com/denis-kiprop/alx-low_level_programming.git">

  <meta name="octolytics-dimension-user_id" content="85315669"><meta name="octolytics-dimension-user_login" content="denis-kiprop"><meta name="octolytics-dimension-repository_id" content="400076709"><meta name="octolytics-dimension-repository_nwo" content="denis-kiprop/alx-low_level_programming"><meta name="octolytics-dimension-repository_public" content="true"><meta name="octolytics-dimension-repository_is_fork" content="false"><meta name="octolytics-dimension-repository_network_root_id" content="400076709"><meta name="octolytics-dimension-repository_network_root_nwo" content="denis-kiprop/alx-low_level_programming">



    <link rel="canonical" href="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" data-pjax-transient="">


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <meta name="browser-optimizely-client-errors-url" content="https://api.github.com/_private/browser/optimizely_client/errors">

  <link rel="mask-icon" href="https://github.githubassets.com/pinned-octocat.svg" color="#000000">
  <link rel="alternate icon" class="js-site-favicon" type="image/png" href="https://github.githubassets.com/favicons/favicon-dark.png">
  <link rel="icon" class="js-site-favicon" type="image/svg+xml" href="https://github.githubassets.com/favicons/favicon-dark.svg">

<meta name="theme-color" content="#1e2327">
<meta name="color-scheme" content="light dark">


  <link rel="manifest" href="https://github.com/manifest.json" crossorigin="use-credentials">

  </head>

  <body class="logged-in env-production page-responsive page-blob intent-mouse" style="word-wrap: break-word;" data-new-gr-c-s-loaded="14.1033.0">
    

    <div class="position-relative js-header-wrapper ">
      <a href="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c#start-of-content" class="p-3 color-bg-info-inverse color-text-white show-on-focus js-skip-to-content">Skip to content</a>
      <span data-view-component="true" class="progress-pjax-loader js-pjax-loader-bar Progress position-fixed width-full">
    <span style="width: 0%;" data-view-component="true" class="Progress-item progress-pjax-loader-bar color-bg-info-inverse"></span>
</span>      
      


        
            <header class="Header js-details-container Details px-3 px-md-4 px-lg-5 flex-wrap flex-md-nowrap" role="banner">
    <div class="Header-item mt-n1 mb-n1  d-none d-md-flex">
      <a class="Header-link " href="https://github.com/" data-hotkey="g d" aria-label="Homepage " data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Header&quot;,&quot;action&quot;:&quot;go to dashboard&quot;,&quot;label&quot;:&quot;icon:logo&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="d0ac287c36a0cc4ae46bd8dcf1528dc7954617f04d93730490b352872051c3e1">
  <svg height="32" aria-hidden="true" viewBox="0 0 16 16" version="1.1" width="32" data-view-component="true" class="octicon octicon-mark-github v-align-middle">
    <path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path>
</svg>
</a>

    </div>

    <div class="Header-item d-md-none">
      <button aria-label="Toggle navigation" aria-expanded="false" type="button" data-view-component="true" class="Header-link js-details-target btn-link">
  
  
        <svg aria-hidden="true" height="24" viewBox="0 0 16 16" version="1.1" width="24" data-view-component="true" class="octicon octicon-three-bars">
    <path fill-rule="evenodd" d="M1 2.75A.75.75 0 011.75 2h12.5a.75.75 0 110 1.5H1.75A.75.75 0 011 2.75zm0 5A.75.75 0 011.75 7h12.5a.75.75 0 110 1.5H1.75A.75.75 0 011 7.75zM1.75 12a.75.75 0 100 1.5h12.5a.75.75 0 100-1.5H1.75z"></path>
</svg>

  

</button>    </div>

    <div class="Header-item Header-item--full flex-column flex-md-row width-full flex-order-2 flex-md-order-none mr-0 mr-md-3 mt-3 mt-md-0 Details-content--hidden-not-important d-md-flex">
          



<div class="header-search flex-auto js-site-search position-relative flex-self-stretch flex-md-self-auto mb-3 mb-md-0 mr-0 mr-md-3 scoped-search site-scoped-search js-jump-to">
  <div class="position-relative">
    <!-- '"` --><!-- </textarea></xmp> --><form class="js-site-search-form" role="search" aria-label="Site" data-scope-type="Repository" data-scope-id="400076709" data-scoped-search-url="/denis-kiprop/alx-low_level_programming/search" data-owner-scoped-search-url="/users/denis-kiprop/search" data-unscoped-search-url="/search" action="https://github.com/denis-kiprop/alx-low_level_programming/search" accept-charset="UTF-8" method="get">
      <label class="form-control input-sm header-search-wrapper p-0 js-chromeless-input-container header-search-wrapper-jump-to position-relative d-flex flex-justify-between flex-items-center">
        <input type="text" class="form-control input-sm header-search-input jump-to-field js-jump-to-field js-site-search-focus js-site-search-field is-clearable" data-hotkey="s,/" name="q" data-test-selector="nav-search-input" placeholder="Search or jump to…" data-unscoped-placeholder="Search or jump to…" data-scoped-placeholder="Search or jump to…" autocapitalize="off" role="combobox" aria-haspopup="listbox" aria-expanded="false" aria-autocomplete="list" aria-controls="jump-to-results" aria-label="Search or jump to…" data-jump-to-suggestions-path="/_graphql/GetSuggestedNavigationDestinations" spellcheck="false" autocomplete="off">
        <input type="hidden" value="se/schZDBa92tpD9S6257Romoqj5Qyol/ueZquNrsAYKNeIWpkGleQp55as150dmeJZfjBMfQqRinWJOxfXikA==" data-csrf="true" class="js-data-jump-to-suggestions-path-csrf">
        <input type="hidden" class="js-site-search-type-field" name="type">
            <svg xmlns="http://www.w3.org/2000/svg" width="22" height="20" aria-hidden="true" class="mr-1 header-search-key-slash"><path fill="none" stroke="#979A9C" opacity=".4" d="M3.5.5h12c1.7 0 3 1.3 3 3v13c0 1.7-1.3 3-3 3h-12c-1.7 0-3-1.3-3-3v-13c0-1.7 1.3-3 3-3z"></path><path fill="#979A9C" d="M11.8 6L8 15.1h-.9L10.8 6h1z"></path></svg>


          <div class="Box position-absolute overflow-hidden d-none jump-to-suggestions js-jump-to-suggestions-container">
            
<ul class="d-none js-jump-to-suggestions-template-container">
  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-suggestion" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" data-item-type="suggestion">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg title="Repository" aria-label="Repository" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo js-jump-to-octicon-repo d-none flex-shrink-0">
    <path fill-rule="evenodd" d="M2 2.5A2.5 2.5 0 014.5 0h8.75a.75.75 0 01.75.75v12.5a.75.75 0 01-.75.75h-2.5a.75.75 0 110-1.5h1.75v-2h-8a1 1 0 00-.714 1.7.75.75 0 01-1.072 1.05A2.495 2.495 0 012 11.5v-9zm10.5-1V9h-8c-.356 0-.694.074-1 .208V2.5a1 1 0 011-1h8zM5 12.25v3.25a.25.25 0 00.4.2l1.45-1.087a.25.25 0 01.3 0L8.6 15.7a.25.25 0 00.4-.2v-3.25a.25.25 0 00-.25-.25h-3.5a.25.25 0 00-.25.25z"></path>
</svg>
      <svg title="Project" aria-label="Project" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-project js-jump-to-octicon-project d-none flex-shrink-0">
    <path fill-rule="evenodd" d="M1.75 0A1.75 1.75 0 000 1.75v12.5C0 15.216.784 16 1.75 16h12.5A1.75 1.75 0 0016 14.25V1.75A1.75 1.75 0 0014.25 0H1.75zM1.5 1.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v12.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25V1.75zM11.75 3a.75.75 0 00-.75.75v7.5a.75.75 0 001.5 0v-7.5a.75.75 0 00-.75-.75zm-8.25.75a.75.75 0 011.5 0v5.5a.75.75 0 01-1.5 0v-5.5zM8 3a.75.75 0 00-.75.75v3.5a.75.75 0 001.5 0v-3.5A.75.75 0 008 3z"></path>
</svg>
      <svg title="Search" aria-label="Search" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search js-jump-to-octicon-search d-none flex-shrink-0">
    <path fill-rule="evenodd" d="M11.5 7a4.499 4.499 0 11-8.998 0A4.499 4.499 0 0111.5 7zm-.82 4.74a6 6 0 111.06-1.06l3.04 3.04a.75.75 0 11-1.06 1.06l-3.04-3.04z"></path>
</svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 color-bg-tertiary px-1 color-text-tertiary ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 color-bg-tertiary px-1 color-text-tertiary ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>

</ul>

<ul class="d-none js-jump-to-no-results-template-container">
  <li class="d-flex flex-justify-center flex-items-center f5 d-none js-jump-to-suggestion p-2">
    <span class="color-text-secondary">No suggested jump to results</span>
  </li>
</ul>

<ul id="jump-to-results" role="listbox" class="p-0 m-0 js-navigation-container jump-to-suggestions-results-container js-jump-to-suggestions-results-container">
  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-scoped-search d-none" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" data-item-type="scoped_search">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg title="Repository" aria-label="Repository" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo js-jump-to-octicon-repo d-none flex-shrink-0">
    <path fill-rule="evenodd" d="M2 2.5A2.5 2.5 0 014.5 0h8.75a.75.75 0 01.75.75v12.5a.75.75 0 01-.75.75h-2.5a.75.75 0 110-1.5h1.75v-2h-8a1 1 0 00-.714 1.7.75.75 0 01-1.072 1.05A2.495 2.495 0 012 11.5v-9zm10.5-1V9h-8c-.356 0-.694.074-1 .208V2.5a1 1 0 011-1h8zM5 12.25v3.25a.25.25 0 00.4.2l1.45-1.087a.25.25 0 01.3 0L8.6 15.7a.25.25 0 00.4-.2v-3.25a.25.25 0 00-.25-.25h-3.5a.25.25 0 00-.25.25z"></path>
</svg>
      <svg title="Project" aria-label="Project" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-project js-jump-to-octicon-project d-none flex-shrink-0">
    <path fill-rule="evenodd" d="M1.75 0A1.75 1.75 0 000 1.75v12.5C0 15.216.784 16 1.75 16h12.5A1.75 1.75 0 0016 14.25V1.75A1.75 1.75 0 0014.25 0H1.75zM1.5 1.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v12.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25V1.75zM11.75 3a.75.75 0 00-.75.75v7.5a.75.75 0 001.5 0v-7.5a.75.75 0 00-.75-.75zm-8.25.75a.75.75 0 011.5 0v5.5a.75.75 0 01-1.5 0v-5.5zM8 3a.75.75 0 00-.75.75v3.5a.75.75 0 001.5 0v-3.5A.75.75 0 008 3z"></path>
</svg>
      <svg title="Search" aria-label="Search" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search js-jump-to-octicon-search d-none flex-shrink-0">
    <path fill-rule="evenodd" d="M11.5 7a4.499 4.499 0 11-8.998 0A4.499 4.499 0 0111.5 7zm-.82 4.74a6 6 0 111.06-1.06l3.04 3.04a.75.75 0 11-1.06 1.06l-3.04-3.04z"></path>
</svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 color-bg-tertiary px-1 color-text-tertiary ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 color-bg-tertiary px-1 color-text-tertiary ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>

  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-owner-scoped-search d-none" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" data-item-type="owner_scoped_search">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg title="Repository" aria-label="Repository" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo js-jump-to-octicon-repo d-none flex-shrink-0">
    <path fill-rule="evenodd" d="M2 2.5A2.5 2.5 0 014.5 0h8.75a.75.75 0 01.75.75v12.5a.75.75 0 01-.75.75h-2.5a.75.75 0 110-1.5h1.75v-2h-8a1 1 0 00-.714 1.7.75.75 0 01-1.072 1.05A2.495 2.495 0 012 11.5v-9zm10.5-1V9h-8c-.356 0-.694.074-1 .208V2.5a1 1 0 011-1h8zM5 12.25v3.25a.25.25 0 00.4.2l1.45-1.087a.25.25 0 01.3 0L8.6 15.7a.25.25 0 00.4-.2v-3.25a.25.25 0 00-.25-.25h-3.5a.25.25 0 00-.25.25z"></path>
</svg>
      <svg title="Project" aria-label="Project" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-project js-jump-to-octicon-project d-none flex-shrink-0">
    <path fill-rule="evenodd" d="M1.75 0A1.75 1.75 0 000 1.75v12.5C0 15.216.784 16 1.75 16h12.5A1.75 1.75 0 0016 14.25V1.75A1.75 1.75 0 0014.25 0H1.75zM1.5 1.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v12.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25V1.75zM11.75 3a.75.75 0 00-.75.75v7.5a.75.75 0 001.5 0v-7.5a.75.75 0 00-.75-.75zm-8.25.75a.75.75 0 011.5 0v5.5a.75.75 0 01-1.5 0v-5.5zM8 3a.75.75 0 00-.75.75v3.5a.75.75 0 001.5 0v-3.5A.75.75 0 008 3z"></path>
</svg>
      <svg title="Search" aria-label="Search" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search js-jump-to-octicon-search d-none flex-shrink-0">
    <path fill-rule="evenodd" d="M11.5 7a4.499 4.499 0 11-8.998 0A4.499 4.499 0 0111.5 7zm-.82 4.74a6 6 0 111.06-1.06l3.04 3.04a.75.75 0 11-1.06 1.06l-3.04-3.04z"></path>
</svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 color-bg-tertiary px-1 color-text-tertiary ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this user">
        In this user
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 color-bg-tertiary px-1 color-text-tertiary ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>

  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-global-search d-none" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" data-item-type="global_search">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg title="Repository" aria-label="Repository" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo js-jump-to-octicon-repo d-none flex-shrink-0">
    <path fill-rule="evenodd" d="M2 2.5A2.5 2.5 0 014.5 0h8.75a.75.75 0 01.75.75v12.5a.75.75 0 01-.75.75h-2.5a.75.75 0 110-1.5h1.75v-2h-8a1 1 0 00-.714 1.7.75.75 0 01-1.072 1.05A2.495 2.495 0 012 11.5v-9zm10.5-1V9h-8c-.356 0-.694.074-1 .208V2.5a1 1 0 011-1h8zM5 12.25v3.25a.25.25 0 00.4.2l1.45-1.087a.25.25 0 01.3 0L8.6 15.7a.25.25 0 00.4-.2v-3.25a.25.25 0 00-.25-.25h-3.5a.25.25 0 00-.25.25z"></path>
</svg>
      <svg title="Project" aria-label="Project" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-project js-jump-to-octicon-project d-none flex-shrink-0">
    <path fill-rule="evenodd" d="M1.75 0A1.75 1.75 0 000 1.75v12.5C0 15.216.784 16 1.75 16h12.5A1.75 1.75 0 0016 14.25V1.75A1.75 1.75 0 0014.25 0H1.75zM1.5 1.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v12.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25V1.75zM11.75 3a.75.75 0 00-.75.75v7.5a.75.75 0 001.5 0v-7.5a.75.75 0 00-.75-.75zm-8.25.75a.75.75 0 011.5 0v5.5a.75.75 0 01-1.5 0v-5.5zM8 3a.75.75 0 00-.75.75v3.5a.75.75 0 001.5 0v-3.5A.75.75 0 008 3z"></path>
</svg>
      <svg title="Search" aria-label="Search" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search js-jump-to-octicon-search d-none flex-shrink-0">
    <path fill-rule="evenodd" d="M11.5 7a4.499 4.499 0 11-8.998 0A4.499 4.499 0 0111.5 7zm-.82 4.74a6 6 0 111.06-1.06l3.04 3.04a.75.75 0 11-1.06 1.06l-3.04-3.04z"></path>
</svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 color-bg-tertiary px-1 color-text-tertiary ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 color-bg-tertiary px-1 color-text-tertiary ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>


    <li class="d-flex flex-justify-center flex-items-center p-0 f5 js-jump-to-suggestion">
      <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="32" height="32" viewBox="0 0 16 16" fill="none" data-view-component="true" class="m-3 anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
    </li>
</ul>

          </div>
      </label>
</form>  </div>
</div>

        <nav class="d-flex flex-column flex-md-row flex-self-stretch flex-md-self-auto" aria-label="Global">
      <a class="Header-link py-md-3 d-block d-md-none py-2 border-top border-md-top-0 border-white-fade" data-ga-click="Header, click, Nav menu - item:dashboard:user" aria-label="Dashboard" href="https://github.com/dashboard">
        Dashboard
</a>
    <a class="js-selected-navigation-item Header-link mt-md-n3 mb-md-n3 py-2 py-md-3 mr-0 mr-md-3 border-top border-md-top-0 border-white-fade" data-hotkey="g p" data-ga-click="Header, click, Nav menu - item:pulls context:user" aria-label="Pull requests you created" data-selected-links="/pulls /pulls/assigned /pulls/mentioned /pulls" href="https://github.com/pulls">
        Pull<span class="d-inline d-md-none d-lg-inline"> request</span>s
</a>
    <a class="js-selected-navigation-item Header-link mt-md-n3 mb-md-n3 py-2 py-md-3 mr-0 mr-md-3 border-top border-md-top-0 border-white-fade" data-hotkey="g i" data-ga-click="Header, click, Nav menu - item:issues context:user" aria-label="Issues you created" data-selected-links="/issues /issues/assigned /issues/mentioned /issues" href="https://github.com/issues">
      Issues
</a>
      <div class="d-flex position-relative">
        <a class="js-selected-navigation-item Header-link flex-auto mt-md-n3 mb-md-n3 py-2 py-md-3 mr-0 mr-md-3 border-top border-md-top-0 border-white-fade" data-ga-click="Header, click, Nav menu - item:marketplace context:user" data-octo-click="marketplace_click" data-octo-dimensions="location:nav_bar" data-selected-links=" /marketplace" href="https://github.com/marketplace">
          Marketplace
</a>      </div>

    <a class="js-selected-navigation-item Header-link mt-md-n3 mb-md-n3 py-2 py-md-3 mr-0 mr-md-3 border-top border-md-top-0 border-white-fade" data-ga-click="Header, click, Nav menu - item:explore" data-selected-links="/explore /trending /trending/developers /integrations /integrations/feature/code /integrations/feature/collaborate /integrations/feature/ship showcases showcases_search showcases_landing /explore" href="https://github.com/explore">
      Explore
</a>
    <a class="js-selected-navigation-item Header-link d-block d-md-none py-2 py-md-3 border-top border-md-top-0 border-white-fade" data-ga-click="Header, click, Nav menu - item:workspaces context:user" data-selected-links="/codespaces /codespaces" href="https://github.com/codespaces">
      Codespaces
</a>
      <a class="js-selected-navigation-item Header-link d-block d-md-none py-2 py-md-3 border-top border-md-top-0 border-white-fade" data-ga-click="Header, click, Nav menu - item:Sponsors" data-hydro-click="{&quot;event_type&quot;:&quot;sponsors.button_click&quot;,&quot;payload&quot;:{&quot;button&quot;:&quot;HEADER_SPONSORS_DASHBOARD&quot;,&quot;sponsorable_login&quot;:&quot;kaleabtdk&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="24f526c7749a8e7fe5214c732fc4ff53f0160c724aab51ab9080e5912d2f6365" data-selected-links=" /sponsors/accounts" href="https://github.com/sponsors/accounts">Sponsors</a>

    <a class="Header-link d-block d-md-none mr-0 mr-md-3 py-2 py-md-3 border-top border-md-top-0 border-white-fade" href="https://github.com/settings/profile">
      Settings
</a>
    <a class="Header-link d-block d-md-none mr-0 mr-md-3 py-2 py-md-3 border-top border-md-top-0 border-white-fade" href="https://github.com/kaleabtdk">
      <img class="avatar avatar-user" loading="lazy" decoding="async" src="./101-print_listint_safe_files/84763233" width="20" height="20" alt="@kaleabtdk">
      kaleabtdk
</a>
    <!-- '"` --><!-- </textarea></xmp> --><form action="https://github.com/logout" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="3XGZTNoMX2rndqAHr3/9DbHIiVyBc+Y0lGlSJzfNJQqyg9lBxD/xV+kd5ev7Gatk/StT18PFCoE08lFnJIuCbA==">
      <button type="submit" class="Header-link mr-0 mr-md-3 py-2 py-md-3 border-top border-md-top-0 border-white-fade d-md-none btn-link d-block width-full text-left" style="padding-left: 2px;" data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Header&quot;,&quot;action&quot;:&quot;sign out&quot;,&quot;label&quot;:&quot;icon:logout&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="54c35d666b847beab10c0af37a9f362894ffcda4f85236bc313da6078a90ee2e">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-sign-out v-align-middle">
    <path fill-rule="evenodd" d="M2 2.75C2 1.784 2.784 1 3.75 1h2.5a.75.75 0 010 1.5h-2.5a.25.25 0 00-.25.25v10.5c0 .138.112.25.25.25h2.5a.75.75 0 010 1.5h-2.5A1.75 1.75 0 012 13.25V2.75zm10.44 4.5H6.75a.75.75 0 000 1.5h5.69l-1.97 1.97a.75.75 0 101.06 1.06l3.25-3.25a.75.75 0 000-1.06l-3.25-3.25a.75.75 0 10-1.06 1.06l1.97 1.97z"></path>
</svg>
        Sign out
      </button>
</form></nav>

    </div>

    <div class="Header-item Header-item--full flex-justify-center d-md-none position-relative">
        <a class="Header-link " href="https://github.com/" data-hotkey="g d" aria-label="Homepage " data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Header&quot;,&quot;action&quot;:&quot;go to dashboard&quot;,&quot;label&quot;:&quot;icon:logo&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="d0ac287c36a0cc4ae46bd8dcf1528dc7954617f04d93730490b352872051c3e1">
  <svg height="32" aria-hidden="true" viewBox="0 0 16 16" version="1.1" width="32" data-view-component="true" class="octicon octicon-mark-github v-align-middle">
    <path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path>
</svg>
</a>

    </div>

    <div class="Header-item mr-0 mr-md-3 flex-order-1 flex-md-order-none">
        


      <notification-indicator class="js-socket-channel" data-test-selector="notifications-indicator" data-channel="eyJjIjoibm90aWZpY2F0aW9uLWNoYW5nZWQ6ODQ3NjMyMzMiLCJ0IjoxNjM0MDU3MzU4fQ==--34107e75ad7b78a314ff87707729e238be4cf4ff4570f9230aea75c6b704db68" data-catalyst="">
        <a href="https://github.com/notifications" class="Header-link notification-indicator position-relative tooltipped tooltipped-sw" aria-label="You have no unread notifications" data-hotkey="g n" data-ga-click="Header, go to notifications, icon:read" data-target="notification-indicator.link">
          <span class="mail-status  " data-target="notification-indicator.modifier"></span>
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-bell">
    <path d="M8 16a2 2 0 001.985-1.75c.017-.137-.097-.25-.235-.25h-3.5c-.138 0-.252.113-.235.25A2 2 0 008 16z"></path><path fill-rule="evenodd" d="M8 1.5A3.5 3.5 0 004.5 5v2.947c0 .346-.102.683-.294.97l-1.703 2.556a.018.018 0 00-.003.01l.001.006c0 .002.002.004.004.006a.017.017 0 00.006.004l.007.001h10.964l.007-.001a.016.016 0 00.006-.004.016.016 0 00.004-.006l.001-.007a.017.017 0 00-.003-.01l-1.703-2.554a1.75 1.75 0 01-.294-.97V5A3.5 3.5 0 008 1.5zM3 5a5 5 0 0110 0v2.947c0 .05.015.098.042.139l1.703 2.555A1.518 1.518 0 0113.482 13H2.518a1.518 1.518 0 01-1.263-2.36l1.703-2.554A.25.25 0 003 7.947V5z"></path>
</svg>
        </a>
      </notification-indicator>

    </div>


    <div class="Header-item position-relative d-none d-md-flex">
        <details class="details-overlay details-reset">
  <summary class="Header-link" aria-label="Create new…" data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Header&quot;,&quot;action&quot;:&quot;create new&quot;,&quot;label&quot;:&quot;icon:add&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="f216561554753fe90d5c6480efb41c378c671be9a747307ae49a770942955d53" aria-haspopup="menu" role="button">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-plus">
    <path fill-rule="evenodd" d="M7.75 2a.75.75 0 01.75.75V7h4.25a.75.75 0 110 1.5H8.5v4.25a.75.75 0 11-1.5 0V8.5H2.75a.75.75 0 010-1.5H7V2.75A.75.75 0 017.75 2z"></path>
</svg> <span class="dropdown-caret"></span>
  </summary>
  <details-menu class="dropdown-menu dropdown-menu-sw" role="menu">
    
<a role="menuitem" class="dropdown-item" href="https://github.com/new" data-ga-click="Header, create new repository">
  New repository
</a>

  <a role="menuitem" class="dropdown-item" href="https://github.com/new/import" data-ga-click="Header, import a repository">
    Import repository
  </a>

<a role="menuitem" class="dropdown-item" href="https://gist.github.com/" data-ga-click="Header, create new gist">
  New gist
</a>

  <a role="menuitem" class="dropdown-item" href="https://github.com/organizations/new" data-ga-click="Header, create new organization">
    New organization
  </a>



  </details-menu>
</details>

    </div>

    <div class="Header-item position-relative mr-0 d-none d-md-flex">
        
  <details class="details-overlay details-reset js-feature-preview-indicator-container" data-feature-preview-indicator-src="/users/kaleabtdk/feature_preview/indicator_check">

  <summary class="Header-link" aria-label="View profile and more" data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Header&quot;,&quot;action&quot;:&quot;show menu&quot;,&quot;label&quot;:&quot;icon:avatar&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="71eb4776436c0311f55aa1b46cb5c20eb102f329ea682e7d9c11e0f6ecca2cae" aria-haspopup="menu" role="button">
    <img src="./101-print_listint_safe_files/84763233" alt="@kaleabtdk" size="20" height="20" width="20" data-view-component="true" class="avatar-user avatar avatar-small">
      <span class="feature-preview-indicator js-feature-preview-indicator" style="top: 1px;"></span>
    <span class="dropdown-caret"></span>
  </summary>
  <details-menu class="dropdown-menu dropdown-menu-sw" style="width: 180px" src="/users/84763233/menu" preload="" role="menu">
      <include-fragment>
        <p class="text-center mt-3" data-hide-on-error="">
          <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="32" height="32" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
        </p>
        <p class="ml-1 mb-2 mt-2 color-fg-default" data-show-on-error="">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path fill-rule="evenodd" d="M8.22 1.754a.25.25 0 00-.44 0L1.698 13.132a.25.25 0 00.22.368h12.164a.25.25 0 00.22-.368L8.22 1.754zm-1.763-.707c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0114.082 15H1.918a1.75 1.75 0 01-1.543-2.575L6.457 1.047zM9 11a1 1 0 11-2 0 1 1 0 012 0zm-.25-5.25a.75.75 0 00-1.5 0v2.5a.75.75 0 001.5 0v-2.5z"></path>
</svg>
          Sorry, something went wrong.
        </p>
      </include-fragment>
  </details-menu>
</details>

    </div>
</header>

            
    </div>

  <div id="start-of-content" class="show-on-focus"></div>






    <div data-pjax-replace="" id="js-flash-container">


  <template class="js-flash-template"></template>
</div>


    

  <include-fragment class="js-notification-shelf-include-fragment" data-base-src="https://github.com/notifications/beta/shelf"></include-fragment>





  <div class="application-main " data-commit-hovercards-enabled="" data-discussion-hovercards-enabled="" data-issue-and-pr-hovercards-enabled="">
        <div itemscope="" itemtype="http://schema.org/SoftwareSourceCode" class="">
    <main id="js-repo-pjax-container" data-pjax-container="">
      

    




  


  <div id="repository-container-header" class="hx_page-header-bg pt-3 hide-full-screen mb-5" data-pjax-replace="">

      <div class="d-flex mb-3 px-3 px-md-4 px-lg-5">

        <div class="flex-auto min-width-0 width-fit mr-3">
            <h1 class=" d-flex flex-wrap flex-items-center wb-break-word f3 text-normal">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo color-icon-secondary mr-2">
    <path fill-rule="evenodd" d="M2 2.5A2.5 2.5 0 014.5 0h8.75a.75.75 0 01.75.75v12.5a.75.75 0 01-.75.75h-2.5a.75.75 0 110-1.5h1.75v-2h-8a1 1 0 00-.714 1.7.75.75 0 01-1.072 1.05A2.495 2.495 0 012 11.5v-9zm10.5-1V9h-8c-.356 0-.694.074-1 .208V2.5a1 1 0 011-1h8zM5 12.25v3.25a.25.25 0 00.4.2l1.45-1.087a.25.25 0 01.3 0L8.6 15.7a.25.25 0 00.4-.2v-3.25a.25.25 0 00-.25-.25h-3.5a.25.25 0 00-.25.25z"></path>
</svg>
  <span class="author flex-self-stretch" itemprop="author">
    <a class="url fn" rel="author" data-hovercard-type="user" data-hovercard-url="/users/denis-kiprop/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="https://github.com/denis-kiprop">denis-kiprop</a>
  </span>
  <span class="mx-1 flex-self-stretch color-text-secondary">/</span>
  <strong itemprop="name" class="mr-2 flex-self-stretch">
    <a data-pjax="#js-repo-pjax-container" href="https://github.com/denis-kiprop/alx-low_level_programming">alx-low_level_programming</a>
  </strong>

  <span></span><span class="Label Label--secondary v-align-middle mr-1">Public</span>
</h1>

        </div>

          <ul class="pagehead-actions flex-shrink-0 d-none d-md-inline" style="padding: 2px 0;">

  <li>
        <notifications-list-subscription-form class="f5 position-relative d-flex" data-catalyst="">
      <details class="details-reset details-overlay f5 position-relative" data-target="notifications-list-subscription-form.details" data-action="toggle:notifications-list-subscription-form#detailsToggled">

      <summary class="btn btn-sm rounded-right-0" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;WATCH_BUTTON&quot;,&quot;repository_id&quot;:400076709,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="f53b4e4266b1b698a1236ab5364463737502bedc05aef4aed68c8e0371cf8e4c" data-ga-click="Repository, click Watch settings, action:blob#show" aria-label="Notifications settings" role="button" aria-haspopup="menu">
          <span data-menu-button="">
            <span hidden="" data-target="notifications-list-subscription-form.unwatchButtonCopy">
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-eye">
    <path fill-rule="evenodd" d="M1.679 7.932c.412-.621 1.242-1.75 2.366-2.717C5.175 4.242 6.527 3.5 8 3.5c1.473 0 2.824.742 3.955 1.715 1.124.967 1.954 2.096 2.366 2.717a.119.119 0 010 .136c-.412.621-1.242 1.75-2.366 2.717C10.825 11.758 9.473 12.5 8 12.5c-1.473 0-2.824-.742-3.955-1.715C2.92 9.818 2.09 8.69 1.679 8.068a.119.119 0 010-.136zM8 2c-1.981 0-3.67.992-4.933 2.078C1.797 5.169.88 6.423.43 7.1a1.619 1.619 0 000 1.798c.45.678 1.367 1.932 2.637 3.024C4.329 13.008 6.019 14 8 14c1.981 0 3.67-.992 4.933-2.078 1.27-1.091 2.187-2.345 2.637-3.023a1.619 1.619 0 000-1.798c-.45-.678-1.367-1.932-2.637-3.023C11.671 2.992 9.981 2 8 2zm0 8a2 2 0 100-4 2 2 0 000 4z"></path>
</svg>
              Unwatch
            </span>
            <span hidden="" data-target="notifications-list-subscription-form.stopIgnoringButtonCopy">
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-bell-slash">
    <path fill-rule="evenodd" d="M8 1.5c-.997 0-1.895.416-2.534 1.086A.75.75 0 014.38 1.55 5 5 0 0113 5v2.373a.75.75 0 01-1.5 0V5A3.5 3.5 0 008 1.5zM4.182 4.31L1.19 2.143a.75.75 0 10-.88 1.214L3 5.305v2.642a.25.25 0 01-.042.139L1.255 10.64A1.518 1.518 0 002.518 13h11.108l1.184.857a.75.75 0 10.88-1.214l-1.375-.996a1.196 1.196 0 00-.013-.01L4.198 4.321a.733.733 0 00-.016-.011zm7.373 7.19L4.5 6.391v1.556c0 .346-.102.683-.294.97l-1.703 2.556a.018.018 0 00-.003.01.015.015 0 00.005.012.017.017 0 00.006.004l.007.001h9.037zM8 16a2 2 0 001.985-1.75c.017-.137-.097-.25-.235-.25h-3.5c-.138 0-.252.113-.235.25A2 2 0 008 16z"></path>
</svg>
              Stop ignoring
            </span>
            <span data-target="notifications-list-subscription-form.watchButtonCopy">
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-eye">
    <path fill-rule="evenodd" d="M1.679 7.932c.412-.621 1.242-1.75 2.366-2.717C5.175 4.242 6.527 3.5 8 3.5c1.473 0 2.824.742 3.955 1.715 1.124.967 1.954 2.096 2.366 2.717a.119.119 0 010 .136c-.412.621-1.242 1.75-2.366 2.717C10.825 11.758 9.473 12.5 8 12.5c-1.473 0-2.824-.742-3.955-1.715C2.92 9.818 2.09 8.69 1.679 8.068a.119.119 0 010-.136zM8 2c-1.981 0-3.67.992-4.933 2.078C1.797 5.169.88 6.423.43 7.1a1.619 1.619 0 000 1.798c.45.678 1.367 1.932 2.637 3.024C4.329 13.008 6.019 14 8 14c1.981 0 3.67-.992 4.933-2.078 1.27-1.091 2.187-2.345 2.637-3.023a1.619 1.619 0 000-1.798c-.45-.678-1.367-1.932-2.637-3.023C11.671 2.992 9.981 2 8 2zm0 8a2 2 0 100-4 2 2 0 000 4z"></path>
</svg>
              Watch
            </span>
          </span>
          <span class="dropdown-caret"></span>
</summary>
        <details-menu class="SelectMenu  " role="menu" data-target="notifications-list-subscription-form.menu">
          <div class="SelectMenu-modal notifications-component-menu-modal">
            <header class="SelectMenu-header">
              <h3 class="SelectMenu-title">Notifications</h3>
              <button class="SelectMenu-closeButton" type="button" aria-label="Close menu" data-action="click:notifications-list-subscription-form#closeMenu">
                <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 0L8 6.94l3.22-3.22a.75.75 0 111.06 1.06L9.06 8l3.22 3.22a.75.75 0 11-1.06 1.06L8 9.06l-3.22 3.22a.75.75 0 01-1.06-1.06L6.94 8 3.72 4.78a.75.75 0 010-1.06z"></path>
</svg>
              </button>
            </header>

            <div class="SelectMenu-list">
              <form data-target="notifications-list-subscription-form.form" data-action="submit:notifications-list-subscription-form#submitForm" action="https://github.com/notifications/subscribe" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="w4B/rGo4Ab9v+2ovJKD9HTA3fMJaLNd2SrIcSYK3dW7crbkjymaV74Sn0G7jIBmONRoYw/CXdjA9fdDKZqKSbw==" autocomplete="off">

                <input type="hidden" name="repository_id" value="400076709">

                <button type="submit" name="do" value="included" class="SelectMenu-item flex-items-start" role="menuitemradio" aria-checked="true" data-targets="notifications-list-subscription-form.subscriptionButtons">
                  <span class="f5">
                    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check">
    <path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path>
</svg>
                  </span>
                  <div>
                    <div class="f5 text-bold">
                      Participating and @mentions
                    </div>
                    <div class="text-small color-text-secondary text-normal pb-1">
                      Only receive notifications from this repository when participating or @mentioned.
                    </div>
                  </div>
                </button>

                <button type="submit" name="do" value="subscribed" class="SelectMenu-item flex-items-start" role="menuitemradio" aria-checked="false" data-targets="notifications-list-subscription-form.subscriptionButtons">
                  <span class="f5">
                    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check">
    <path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path>
</svg>
                  </span>
                  <div>
                    <div class="f5 text-bold">
                      All Activity
                    </div>
                    <div class="text-small color-text-secondary text-normal pb-1">
                      Notified of all notifications on this repository.
                    </div>
                  </div>
                </button>

                <button type="submit" name="do" value="ignore" class="SelectMenu-item flex-items-start" role="menuitemradio" aria-checked="false" data-targets="notifications-list-subscription-form.subscriptionButtons">
                  <span class="f5">
                    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check">
    <path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path>
</svg>
                  </span>
                  <div>
                    <div class="f5 text-bold">
                      Ignore
                    </div>
                    <div class="text-small color-text-secondary text-normal pb-1">
                      Never be notified.
                    </div>
                  </div>
                </button>
</form>
              <button class="SelectMenu-item flex-items-start pr-3" type="button" role="menuitemradio" data-target="notifications-list-subscription-form.customButton" data-action="click:notifications-list-subscription-form#openCustomDialog" aria-haspopup="true" aria-checked="false">
                <span class="f5">
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check">
    <path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path>
</svg>
                </span>
                <div>
                  <div class="d-flex flex-items-start flex-justify-between">
                    <div class="f5 text-bold">Custom</div>
                    <div class="f5 pr-1">
                      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-arrow-right">
    <path fill-rule="evenodd" d="M8.22 2.97a.75.75 0 011.06 0l4.25 4.25a.75.75 0 010 1.06l-4.25 4.25a.75.75 0 01-1.06-1.06l2.97-2.97H3.75a.75.75 0 010-1.5h7.44L8.22 4.03a.75.75 0 010-1.06z"></path>
</svg>
                    </div>
                  </div>
                  <div class="text-small color-text-secondary text-normal pb-1">
                    Select events you want to be notified of in addition to participating and @mentions.
                  </div>
                </div>
              </button>

                <div class="px-3 py-2 d-flex color-bg-secondary flex-items-center">
                  <span class="f5">
                    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-device-mobile SelectMenu-icon SelectMenu-icon--device-mobile">
    <path fill-rule="evenodd" d="M3.75 0A1.75 1.75 0 002 1.75v12.5c0 .966.784 1.75 1.75 1.75h8.5A1.75 1.75 0 0014 14.25V1.75A1.75 1.75 0 0012.25 0h-8.5zM3.5 1.75a.25.25 0 01.25-.25h8.5a.25.25 0 01.25.25v12.5a.25.25 0 01-.25.25h-8.5a.25.25 0 01-.25-.25V1.75zM8 13a1 1 0 100-2 1 1 0 000 2z"></path>
</svg>
                  </span>
                  <span classname="text-small color-text-secondary text-normal pb-1">
                    Get push notifications on <a target="_blank" rel="noopener noreferrer" href="https://apps.apple.com/app/apple-store/id1477376905?ct=watch-dropdown&amp;mt=8&amp;pt=524675">iOS</a> or <a target="_blank" rel="noopener noreferrer" href="https://play.google.com/store/apps/details?id=com.github.android&amp;referrer=utm_campaign%3Dwatch-dropdown%26utm_medium%3Dweb%26utm_source%3Dgithub">Android</a>.
                  </span>
                </div>
            </div>
          </div>
        </details-menu>

        <details-dialog class="notifications-component-dialog " data-target="notifications-list-subscription-form.customDialog" hidden="" role="dialog" aria-modal="true">
          <div class="SelectMenu-modal notifications-component-dialog-modal overflow-visible">
            <form data-target="notifications-list-subscription-form.customform" data-action="submit:notifications-list-subscription-form#submitCustomForm" action="https://github.com/notifications/subscribe" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="j33J7el/gGz9m9F/mbGp9+A82TAyJJwrHrekCI57vyCQUA9iSSEUPBbHaz5eMU1k5RG9MZifPW1peGiLam5YIQ==" autocomplete="off">

              <input type="hidden" name="repository_id" value="400076709">

              <header class="d-sm-none SelectMenu-header pb-0 border-bottom-0 px-2 px-sm-3">
                <h1 class="f3 SelectMenu-title d-inline-flex">
                  <button class="color-bg-primary border-0 px-2 py-0 m-0 Link--secondary f5" aria-label="Return to menu" type="button" data-action="click:notifications-list-subscription-form#closeCustomDialog">
                    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-arrow-left">
    <path fill-rule="evenodd" d="M7.78 12.53a.75.75 0 01-1.06 0L2.47 8.28a.75.75 0 010-1.06l4.25-4.25a.75.75 0 011.06 1.06L4.81 7h7.44a.75.75 0 010 1.5H4.81l2.97 2.97a.75.75 0 010 1.06z"></path>
</svg>
                  </button>
                  Custom
                </h1>
              </header>

              <header class="d-none d-sm-flex flex-items-start pt-1">
                <button class="border-0 px-2 pt-1 m-0 Link--secondary f5" style="background-color: transparent;" aria-label="Return to menu" type="button" data-action="click:notifications-list-subscription-form#closeCustomDialog">
                  <svg style="position: relative; left: 2px; top: 1px" aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-arrow-left">
    <path fill-rule="evenodd" d="M7.78 12.53a.75.75 0 01-1.06 0L2.47 8.28a.75.75 0 010-1.06l4.25-4.25a.75.75 0 011.06 1.06L4.81 7h7.44a.75.75 0 010 1.5H4.81l2.97 2.97a.75.75 0 010 1.06z"></path>
</svg>
                </button>

                <h1 class="pt-1 pr-4 pb-0 pl-0 f5 text-bold">
                  Custom
                </h1>
              </header>

              <fieldset>
                <legend>
                  <div class="text-small color-text-secondary pt-0 pr-3 pb-3 pl-6 pl-sm-5 border-bottom mb-3">
                    Select events you want to be notified of in addition to participating and @mentions.
                  </div>
                </legend>
                  <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                    <label class="f5 text-normal">
                      <input type="checkbox" name="thread_types[]" value="Issue" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated">
                      Issues
                    </label>

                  </div>
                  <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                    <label class="f5 text-normal">
                      <input type="checkbox" name="thread_types[]" value="PullRequest" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated">
                      Pull requests
                    </label>

                  </div>
                  <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                    <label class="f5 text-normal">
                      <input type="checkbox" name="thread_types[]" value="Release" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated">
                      Releases
                    </label>

                  </div>
                  <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                    <label class="f5 text-normal">
                      <input type="checkbox" name="thread_types[]" value="Discussion" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated">
                      Discussions
                    </label>

                      <span class="tooltipped tooltipped-nw mr-2 p-1 float-right" aria-label="Discussions are not enabled for this repo">
                        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-info color-icon-secondary">
    <path fill-rule="evenodd" d="M8 1.5a6.5 6.5 0 100 13 6.5 6.5 0 000-13zM0 8a8 8 0 1116 0A8 8 0 010 8zm6.5-.25A.75.75 0 017.25 7h1a.75.75 0 01.75.75v2.75h.25a.75.75 0 010 1.5h-2a.75.75 0 010-1.5h.25v-2h-.25a.75.75 0 01-.75-.75zM8 6a1 1 0 100-2 1 1 0 000 2z"></path>
</svg>
                      </span>
                  </div>
                  <div class="form-checkbox mr-3 ml-6 ml-sm-5 mb-2 mt-0">
                    <label class="f5 text-normal">
                      <input type="checkbox" name="thread_types[]" value="SecurityAlert" data-targets="notifications-list-subscription-form.threadTypeCheckboxes" data-action="change:notifications-list-subscription-form#threadTypeCheckboxesUpdated">
                      Security alerts
                    </label>

                  </div>
              </fieldset>
              <div class="pt-2 pb-3 px-3 d-flex flex-justify-start flex-row-reverse">
                <button type="submit" name="do" value="custom" class="btn btn-sm btn-primary ml-2" data-target="notifications-list-subscription-form.customSubmit" disabled="">Apply</button>

                <button data-action="click:notifications-list-subscription-form#resetForm" data-close-dialog="" type="button" data-view-component="true" class="btn-sm btn">
  
  Cancel
  

</button>
              </div>
</form>          </div>
        </details-dialog>
        <div class="notifications-component-dialog-overlay"></div>
      </details>
        <a class="social-count" href="https://github.com/denis-kiprop/alx-low_level_programming/watchers" aria-label="1 user is watching this repository" data-target="notifications-list-subscription-form.socialCount">
          1
        </a>
    </notifications-list-subscription-form>



  </li>

  <li>
        <div class="d-block js-toggler-container js-social-container starring-container ">
    <form class="starred js-social-form" action="https://github.com/denis-kiprop/alx-low_level_programming/unstar" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="FTrFjqdFSo0UpeveJDOb4dLUV4H9Kdo7aRSlOKmPvpY7/WkHp+DRafXLT+LNGAHFc86eYmFlCx1tDJoyM3W3Pg==" autocomplete="off">
      <input type="hidden" name="context" value="repository">
      <button type="submit" class="btn btn-sm btn-with-count  js-toggler-target" aria-label="Unstar this repository" title="Unstar denis-kiprop/alx-low_level_programming" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;UNSTAR_BUTTON&quot;,&quot;repository_id&quot;:400076709,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="6f1bc199effd9d4f97622842766490965c3d56943380730db6bac47238e95e68" data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star-fill mr-1">
    <path fill-rule="evenodd" d="M8 .25a.75.75 0 01.673.418l1.882 3.815 4.21.612a.75.75 0 01.416 1.279l-3.046 2.97.719 4.192a.75.75 0 01-1.088.791L8 12.347l-3.766 1.98a.75.75 0 01-1.088-.79l.72-4.194L.818 6.374a.75.75 0 01.416-1.28l4.21-.611L7.327.668A.75.75 0 018 .25z"></path>
</svg>
        <span data-view-component="true">
          Unstar
</span></button>        <a class="social-count js-social-count" href="https://github.com/denis-kiprop/alx-low_level_programming/stargazers" aria-label="0 users starred this repository">
           0
        </a>
</form>
    <form class="unstarred js-social-form" action="https://github.com/denis-kiprop/alx-low_level_programming/star" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="xW1NZKs17RO6fatZHN4xk3CLSiSg+ZxJkjU8Sf0RCua9Vo7fd5MP2plJYvJ9d63z9Goehx7SIBZLzMVPHvoTXQ==" autocomplete="off">
      <input type="hidden" name="context" value="repository">
      <button type="submit" class="btn btn-sm btn-with-count  js-toggler-target" aria-label="Star this repository" title="Star denis-kiprop/alx-low_level_programming" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;STAR_BUTTON&quot;,&quot;repository_id&quot;:400076709,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="c8e251e326cf13fff278c9bfa5f470051a33ebc9357242e56c8d009d0484b040" data-ga-click="Repository, click star button, action:blob#show; text:Star">        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-star mr-1">
    <path fill-rule="evenodd" d="M8 .25a.75.75 0 01.673.418l1.882 3.815 4.21.612a.75.75 0 01.416 1.279l-3.046 2.97.719 4.192a.75.75 0 01-1.088.791L8 12.347l-3.766 1.98a.75.75 0 01-1.088-.79l.72-4.194L.818 6.374a.75.75 0 01.416-1.28l4.21-.611L7.327.668A.75.75 0 018 .25zm0 2.445L6.615 5.5a.75.75 0 01-.564.41l-3.097.45 2.24 2.184a.75.75 0 01.216.664l-.528 3.084 2.769-1.456a.75.75 0 01.698 0l2.77 1.456-.53-3.084a.75.75 0 01.216-.664l2.24-2.183-3.096-.45a.75.75 0 01-.564-.41L8 2.694v.001z"></path>
</svg>
        <span data-view-component="true">
          Star
</span></button>        <a class="social-count js-social-count" href="https://github.com/denis-kiprop/alx-low_level_programming/stargazers" aria-label="0 users starred this repository">
          0
        </a>
</form>  </div>

  </li>

  <li>
            <div class="float-left">
              <details class="details-reset details-overlay details-overlay-dark ">
                      <summary class="btn btn-sm btn-with-count" title="Fork your own copy of denis-kiprop/alx-low_level_programming to your account" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;FORK_BUTTON&quot;,&quot;repository_id&quot;:400076709,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="b711ca90b080efa9509ef9dd86971564ab3cd221bd26fb8afcf5f4d3db5510e9" data-ga-click="Repository, show fork modal, action:blob#show; text:Fork" role="button">
                    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-repo-forked">
    <path fill-rule="evenodd" d="M5 3.25a.75.75 0 11-1.5 0 .75.75 0 011.5 0zm0 2.122a2.25 2.25 0 10-1.5 0v.878A2.25 2.25 0 005.75 8.5h1.5v2.128a2.251 2.251 0 101.5 0V8.5h1.5a2.25 2.25 0 002.25-2.25v-.878a2.25 2.25 0 10-1.5 0v.878a.75.75 0 01-.75.75h-4.5A.75.75 0 015 6.25v-.878zm3.75 7.378a.75.75 0 11-1.5 0 .75.75 0 011.5 0zm3-8.75a.75.75 0 100-1.5.75.75 0 000 1.5z"></path>
</svg>
                    Fork
                  </summary>

  <details-dialog class="Box d-flex flex-column anim-fade-in fast Box--overlay " aria-label="Fork alx-low_level_programming" src="/denis-kiprop/alx-low_level_programming/fork?fragment=1" preload="" role="dialog" aria-modal="true">
    <div class="Box-header">
      <button class="Box-btn-octicon btn-octicon float-right" type="button" aria-label="Close dialog" data-close-dialog="">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 0L8 6.94l3.22-3.22a.75.75 0 111.06 1.06L9.06 8l3.22 3.22a.75.75 0 11-1.06 1.06L8 9.06l-3.22 3.22a.75.75 0 01-1.06-1.06L6.94 8 3.72 4.78a.75.75 0 010-1.06z"></path>
</svg>
      </button>
      <h1 class="Box-title">Fork alx-low_level_programming</h1>
    </div>
      
                <div class="text-center overflow-auto">
                  <include-fragment>
                    <div class="octocat-spinner my-5" aria-label="Loading..."></div>
                    <p class="f5 color-text-secondary">If this dialog fails to load, you can visit <a href="https://github.com/denis-kiprop/alx-low_level_programming/fork">the fork page</a> directly.</p>
                  </include-fragment>
                </div>

  </details-dialog>
</details>
            </div>

      <a href="https://github.com/denis-kiprop/alx-low_level_programming/network/members" class="social-count" aria-label="0 users forked this repository">
        0
      </a>
  </li>
</ul>

      </div>

      <div id="responsive-meta-container" data-pjax-replace="">
</div>


        
<nav data-pjax="#js-repo-pjax-container" aria-label="Repository" data-view-component="true" class="js-repo-nav js-sidenav-container-pjax js-responsive-underlinenav overflow-hidden UnderlineNav px-3 px-md-4 px-lg-5">

  <ul data-view-component="true" class="UnderlineNav-body list-style-none">
      <li data-view-component="true" class="d-inline-flex">
  <a id="code-tab" href="https://github.com/denis-kiprop/alx-low_level_programming" data-tab-item="i0code-tab" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages repo_deployments /denis-kiprop/alx-low_level_programming" data-hotkey="g c" data-ga-click="Repository, Navigation click, Code tab" data-pjax="#repo-content-pjax-container" aria-current="page" data-view-component="true" class="UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item selected">
    
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-code UnderlineNav-octicon d-none d-sm-inline">
    <path fill-rule="evenodd" d="M4.72 3.22a.75.75 0 011.06 1.06L2.06 8l3.72 3.72a.75.75 0 11-1.06 1.06L.47 8.53a.75.75 0 010-1.06l4.25-4.25zm6.56 0a.75.75 0 10-1.06 1.06L13.94 8l-3.72 3.72a.75.75 0 101.06 1.06l4.25-4.25a.75.75 0 000-1.06l-4.25-4.25z"></path>
</svg>
          <span data-content="Code">Code</span>
            <span title="Not available" data-view-component="true" class="Counter"></span>

    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="issues-tab" href="https://github.com/denis-kiprop/alx-low_level_programming/issues" data-tab-item="i1issues-tab" data-selected-links="repo_issues repo_labels repo_milestones /denis-kiprop/alx-low_level_programming/issues" data-hotkey="g i" data-ga-click="Repository, Navigation click, Issues tab" data-pjax="#repo-content-pjax-container" data-view-component="true" class="UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened UnderlineNav-octicon d-none d-sm-inline">
    <path d="M8 9.5a1.5 1.5 0 100-3 1.5 1.5 0 000 3z"></path><path fill-rule="evenodd" d="M8 0a8 8 0 100 16A8 8 0 008 0zM1.5 8a6.5 6.5 0 1113 0 6.5 6.5 0 01-13 0z"></path>
</svg>
          <span data-content="Issues">Issues</span>
            <span title="0" hidden="hidden" data-view-component="true" class="Counter">0</span>

    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="pull-requests-tab" href="https://github.com/denis-kiprop/alx-low_level_programming/pulls" data-tab-item="i2pull-requests-tab" data-selected-links="repo_pulls checks /denis-kiprop/alx-low_level_programming/pulls" data-hotkey="g p" data-ga-click="Repository, Navigation click, Pull requests tab" data-pjax="#repo-content-pjax-container" data-view-component="true" class="UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request UnderlineNav-octicon d-none d-sm-inline">
    <path fill-rule="evenodd" d="M7.177 3.073L9.573.677A.25.25 0 0110 .854v4.792a.25.25 0 01-.427.177L7.177 3.427a.25.25 0 010-.354zM3.75 2.5a.75.75 0 100 1.5.75.75 0 000-1.5zm-2.25.75a2.25 2.25 0 113 2.122v5.256a2.251 2.251 0 11-1.5 0V5.372A2.25 2.25 0 011.5 3.25zM11 2.5h-1V4h1a1 1 0 011 1v5.628a2.251 2.251 0 101.5 0V5A2.5 2.5 0 0011 2.5zm1 10.25a.75.75 0 111.5 0 .75.75 0 01-1.5 0zM3.75 12a.75.75 0 100 1.5.75.75 0 000-1.5z"></path>
</svg>
          <span data-content="Pull requests">Pull requests</span>
            <span title="0" hidden="hidden" data-view-component="true" class="Counter">0</span>

    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="actions-tab" href="https://github.com/denis-kiprop/alx-low_level_programming/actions" data-tab-item="i3actions-tab" data-selected-links="repo_actions /denis-kiprop/alx-low_level_programming/actions" data-hotkey="g a" data-ga-click="Repository, Navigation click, Actions tab" data-pjax="#repo-content-pjax-container" data-view-component="true" class="UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-play UnderlineNav-octicon d-none d-sm-inline">
    <path fill-rule="evenodd" d="M1.5 8a6.5 6.5 0 1113 0 6.5 6.5 0 01-13 0zM8 0a8 8 0 100 16A8 8 0 008 0zM6.379 5.227A.25.25 0 006 5.442v5.117a.25.25 0 00.379.214l4.264-2.559a.25.25 0 000-.428L6.379 5.227z"></path>
</svg>
          <span data-content="Actions">Actions</span>
            <span title="Not available" data-view-component="true" class="Counter"></span>

    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="projects-tab" href="https://github.com/denis-kiprop/alx-low_level_programming/projects" data-tab-item="i4projects-tab" data-selected-links="repo_projects new_repo_project repo_project /denis-kiprop/alx-low_level_programming/projects" data-hotkey="g b" data-ga-click="Repository, Navigation click, Projects tab" data-view-component="true" class="UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-project UnderlineNav-octicon d-none d-sm-inline">
    <path fill-rule="evenodd" d="M1.75 0A1.75 1.75 0 000 1.75v12.5C0 15.216.784 16 1.75 16h12.5A1.75 1.75 0 0016 14.25V1.75A1.75 1.75 0 0014.25 0H1.75zM1.5 1.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v12.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25V1.75zM11.75 3a.75.75 0 00-.75.75v7.5a.75.75 0 001.5 0v-7.5a.75.75 0 00-.75-.75zm-8.25.75a.75.75 0 011.5 0v5.5a.75.75 0 01-1.5 0v-5.5zM8 3a.75.75 0 00-.75.75v3.5a.75.75 0 001.5 0v-3.5A.75.75 0 008 3z"></path>
</svg>
          <span data-content="Projects">Projects</span>
            <span title="0" hidden="hidden" data-view-component="true" class="Counter">0</span>

    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="wiki-tab" href="https://github.com/denis-kiprop/alx-low_level_programming/wiki" data-tab-item="i5wiki-tab" data-selected-links="repo_wiki /denis-kiprop/alx-low_level_programming/wiki" data-hotkey="g w" data-ga-click="Repository, Navigation click, Wikis tab" data-view-component="true" class="UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-book UnderlineNav-octicon d-none d-sm-inline">
    <path fill-rule="evenodd" d="M0 1.75A.75.75 0 01.75 1h4.253c1.227 0 2.317.59 3 1.501A3.744 3.744 0 0111.006 1h4.245a.75.75 0 01.75.75v10.5a.75.75 0 01-.75.75h-4.507a2.25 2.25 0 00-1.591.659l-.622.621a.75.75 0 01-1.06 0l-.622-.621A2.25 2.25 0 005.258 13H.75a.75.75 0 01-.75-.75V1.75zm8.755 3a2.25 2.25 0 012.25-2.25H14.5v9h-3.757c-.71 0-1.4.201-1.992.572l.004-7.322zm-1.504 7.324l.004-5.073-.002-2.253A2.25 2.25 0 005.003 2.5H1.5v9h3.757a3.75 3.75 0 011.994.574z"></path>
</svg>
          <span data-content="Wiki">Wiki</span>
            <span title="Not available" data-view-component="true" class="Counter"></span>

    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="security-tab" href="https://github.com/denis-kiprop/alx-low_level_programming/security" data-tab-item="i6security-tab" data-selected-links="security overview alerts policy token_scanning code_scanning /denis-kiprop/alx-low_level_programming/security" data-hotkey="g s" data-ga-click="Repository, Navigation click, Security tab" data-pjax="#repo-content-pjax-container" data-view-component="true" class="UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-shield UnderlineNav-octicon d-none d-sm-inline">
    <path fill-rule="evenodd" d="M7.467.133a1.75 1.75 0 011.066 0l5.25 1.68A1.75 1.75 0 0115 3.48V7c0 1.566-.32 3.182-1.303 4.682-.983 1.498-2.585 2.813-5.032 3.855a1.7 1.7 0 01-1.33 0c-2.447-1.042-4.049-2.357-5.032-3.855C1.32 10.182 1 8.566 1 7V3.48a1.75 1.75 0 011.217-1.667l5.25-1.68zm.61 1.429a.25.25 0 00-.153 0l-5.25 1.68a.25.25 0 00-.174.238V7c0 1.358.275 2.666 1.057 3.86.784 1.194 2.121 2.34 4.366 3.297a.2.2 0 00.154 0c2.245-.956 3.582-2.104 4.366-3.298C13.225 9.666 13.5 8.36 13.5 7V3.48a.25.25 0 00-.174-.237l-5.25-1.68zM9 10.5a1 1 0 11-2 0 1 1 0 012 0zm-.25-5.75a.75.75 0 10-1.5 0v3a.75.75 0 001.5 0v-3z"></path>
</svg>
          <span data-content="Security">Security</span>
            

    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="insights-tab" href="https://github.com/denis-kiprop/alx-low_level_programming/pulse" data-tab-item="i7insights-tab" data-selected-links="repo_graphs repo_contributors dependency_graph dependabot_updates pulse people community /denis-kiprop/alx-low_level_programming/pulse" data-ga-click="Repository, Navigation click, Insights tab" data-view-component="true" class="UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
                  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-graph UnderlineNav-octicon d-none d-sm-inline">
    <path fill-rule="evenodd" d="M1.5 1.75a.75.75 0 00-1.5 0v12.5c0 .414.336.75.75.75h14.5a.75.75 0 000-1.5H1.5V1.75zm14.28 2.53a.75.75 0 00-1.06-1.06L10 7.94 7.53 5.47a.75.75 0 00-1.06 0L3.22 8.72a.75.75 0 001.06 1.06L7 7.06l2.47 2.47a.75.75 0 001.06 0l5.25-5.25z"></path>
</svg>
          <span data-content="Insights">Insights</span>
            <span title="Not available" data-view-component="true" class="Counter"></span>

    
</a></li>
</ul>
    <div style="visibility:hidden;" data-view-component="true" class="UnderlineNav-actions js-responsive-underlinenav-overflow position-absolute pr-3 pr-md-4 pr-lg-5 right-0">      <details data-view-component="true" class="details-overlay details-reset position-relative">
  <summary role="button" data-view-component="true">          <div class="UnderlineNav-item mr-0 border-0">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-kebab-horizontal">
    <path d="M8 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zM1.5 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zm13 0a1.5 1.5 0 100-3 1.5 1.5 0 000 3z"></path>
</svg>
            <span class="sr-only">More</span>
          </div>
</summary>
  <div data-view-component="true">          <details-menu role="menu" data-view-component="true" class="dropdown-menu dropdown-menu-sw">
  
            <ul>
                <li data-menu-item="i0code-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item selected dropdown-item" aria-current="page" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages repo_deployments /denis-kiprop/alx-low_level_programming" href="https://github.com/denis-kiprop/alx-low_level_programming">
                    Code
</a>                </li>
                <li data-menu-item="i1issues-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="repo_issues repo_labels repo_milestones /denis-kiprop/alx-low_level_programming/issues" href="https://github.com/denis-kiprop/alx-low_level_programming/issues">
                    Issues
</a>                </li>
                <li data-menu-item="i2pull-requests-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="repo_pulls checks /denis-kiprop/alx-low_level_programming/pulls" href="https://github.com/denis-kiprop/alx-low_level_programming/pulls">
                    Pull requests
</a>                </li>
                <li data-menu-item="i3actions-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="repo_actions /denis-kiprop/alx-low_level_programming/actions" href="https://github.com/denis-kiprop/alx-low_level_programming/actions">
                    Actions
</a>                </li>
                <li data-menu-item="i4projects-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="repo_projects new_repo_project repo_project /denis-kiprop/alx-low_level_programming/projects" href="https://github.com/denis-kiprop/alx-low_level_programming/projects">
                    Projects
</a>                </li>
                <li data-menu-item="i5wiki-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="repo_wiki /denis-kiprop/alx-low_level_programming/wiki" href="https://github.com/denis-kiprop/alx-low_level_programming/wiki">
                    Wiki
</a>                </li>
                <li data-menu-item="i6security-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="security overview alerts policy token_scanning code_scanning /denis-kiprop/alx-low_level_programming/security" href="https://github.com/denis-kiprop/alx-low_level_programming/security">
                    Security
</a>                </li>
                <li data-menu-item="i7insights-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links="repo_graphs repo_contributors dependency_graph dependabot_updates pulse people community /denis-kiprop/alx-low_level_programming/pulse" href="https://github.com/denis-kiprop/alx-low_level_programming/pulse">
                    Insights
</a>                </li>
            </ul>

</details-menu></div>
</details></div>
</nav>
  </div>



<div class="clearfix new-discussion-timeline container-xl px-3 px-md-4 px-lg-5">
  <div id="repo-content-pjax-container" class="repository-content ">

      <a href="https://github.dev/" class="d-none js-github-dev-shortcut" data-hotkey=".">Open in github.dev</a>



    
      
  
  
<div>
  


    <a class="d-none js-permalink-shortcut" data-hotkey="y" href="https://github.com/denis-kiprop/alx-low_level_programming/blob/4f1435f02b6c185b6371864bffd642490142e3e4/0x13-more_singly_linked_lists/101-print_listint_safe.c">Permalink</a>

    <!-- blob contrib key: blob_contributors:v22:a538162bba8d1f3e42baa4e60b50e7c7d3726805782825bdb82ebd5851c15b23 -->

    <div class="d-flex flex-items-start flex-shrink-0 pb-3 flex-wrap flex-md-nowrap flex-justify-between flex-md-justify-start">
      
<div class="position-relative">
  <details class="details-reset details-overlay mr-0 mb-0 " id="branch-select-menu">
    <summary class="btn css-truncate" data-hotkey="w" title="Switch branches or tags">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-branch">
    <path fill-rule="evenodd" d="M11.75 2.5a.75.75 0 100 1.5.75.75 0 000-1.5zm-2.25.75a2.25 2.25 0 113 2.122V6A2.5 2.5 0 0110 8.5H6a1 1 0 00-1 1v1.128a2.251 2.251 0 11-1.5 0V5.372a2.25 2.25 0 111.5 0v1.836A2.492 2.492 0 016 7h4a1 1 0 001-1v-.628A2.25 2.25 0 019.5 3.25zM4.25 12a.75.75 0 100 1.5.75.75 0 000-1.5zM3.5 3.25a.75.75 0 111.5 0 .75.75 0 01-1.5 0z"></path>
</svg>
      <span class="css-truncate-target" data-menu-button="">master</span>
      <span class="dropdown-caret"></span>
    </summary>

      
<div class="SelectMenu">
  <div class="SelectMenu-modal">
    <header class="SelectMenu-header">
      <span class="SelectMenu-title">Switch branches/tags</span>
      <button class="SelectMenu-closeButton" type="button" data-toggle-for="branch-select-menu"><svg aria-label="Close menu" aria-hidden="false" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 0L8 6.94l3.22-3.22a.75.75 0 111.06 1.06L9.06 8l3.22 3.22a.75.75 0 11-1.06 1.06L8 9.06l-3.22 3.22a.75.75 0 01-1.06-1.06L6.94 8 3.72 4.78a.75.75 0 010-1.06z"></path>
</svg></button>
    </header>

    <input-demux data-action="tab-container-change:input-demux#storeInput tab-container-changed:input-demux#updateInput" data-catalyst="">
      <tab-container class="d-flex flex-column js-branches-tags-tabs" style="min-height: 0;">
        <div class="SelectMenu-filter">
          <input data-target="input-demux.source" id="context-commitish-filter-field" class="SelectMenu-input form-control" aria-owns="ref-list-branches" data-controls-ref-menu-id="ref-list-branches" autofocus="" autocomplete="off" aria-label="Filter branches/tags" placeholder="Filter branches/tags" type="text">
        </div>

        <div class="SelectMenu-tabs" role="tablist" data-target="input-demux.control">
          <button class="SelectMenu-tab" type="button" role="tab" aria-selected="true" tabindex="0">Branches</button>
          <button class="SelectMenu-tab" type="button" role="tab" aria-selected="false" tabindex="-1">Tags</button>
        </div>

        <div role="tabpanel" id="ref-list-branches" data-filter-placeholder="Filter branches/tags" class="d-flex flex-column flex-auto overflow-auto" tabindex="">
          <ref-selector type="branch" data-targets="input-demux.sinks" data-action="
              input-entered:ref-selector#inputEntered
              tab-selected:ref-selector#tabSelected
              focus-list:ref-selector#focusFirstListMember
            " query-endpoint="/denis-kiprop/alx-low_level_programming/refs" cache-key="v0:1629962318.500624" current-committish="bWFzdGVy" default-branch="bWFzdGVy" name-with-owner="ZGVuaXMta2lwcm9wL2FseC1sb3dfbGV2ZWxfcHJvZ3JhbW1pbmc=" prefetch-on-mouseover="" data-catalyst="">

            <template data-target="ref-selector.fetchFailedTemplate"></template>

              <template data-target="ref-selector.noMatchTemplate"></template>


            <!-- TODO: this max-height is necessary or else the branch list won't scroll.  why? -->
            <div data-target="ref-selector.listContainer" role="menu" class="SelectMenu-list " style="max-height: 330px" data-pjax="#repo-content-pjax-container"><div style="position: relative; overflow: hidden; width: 100%; min-height: 100%; will-change: transform; height: 33px;"><div style="position:absolute; top:0; left:0; height:100%; width:100%; overflow:visible;">
  <a href="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" class="SelectMenu-item" role="menuitemradio" rel="nofollow" aria-checked="true" data-index="0">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check">
    <path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path>
</svg>
    <span class="flex-1 css-truncate css-truncate-overflow ">master</span>
    <span class="Label Label--secondary flex-self-start">default</span>
  </a>
<span></span></div></div></div>

              <template data-target="ref-selector.itemTemplate"></template>


              <footer class="SelectMenu-footer"><a href="https://github.com/denis-kiprop/alx-low_level_programming/branches">View all branches</a></footer>
          </ref-selector>

        </div>

        <div role="tabpanel" id="tags-menu" data-filter-placeholder="Find a tag" class="d-flex flex-column flex-auto overflow-auto" tabindex="" hidden="">
          <ref-selector type="tag" data-action="
              input-entered:ref-selector#inputEntered
              tab-selected:ref-selector#tabSelected
              focus-list:ref-selector#focusFirstListMember
            " data-targets="input-demux.sinks" query-endpoint="/denis-kiprop/alx-low_level_programming/refs" cache-key="v0:1629962318.500624" current-committish="bWFzdGVy" default-branch="bWFzdGVy" name-with-owner="ZGVuaXMta2lwcm9wL2FseC1sb3dfbGV2ZWxfcHJvZ3JhbW1pbmc=" data-catalyst="">

            <template data-target="ref-selector.fetchFailedTemplate"></template>

            <template data-target="ref-selector.noMatchTemplate"></template>

              <template data-target="ref-selector.itemTemplate"></template>


            <div data-target="ref-selector.listContainer" role="menu" class="SelectMenu-list" style="max-height: 330px" data-pjax="#repo-content-pjax-container">
              <div class="SelectMenu-loading pt-3 pb-0" aria-label="Menu is loading">
                <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="32" height="32" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
              </div>
            </div>
              <footer class="SelectMenu-footer"><a href="https://github.com/denis-kiprop/alx-low_level_programming/tags">View all tags</a></footer>
          </ref-selector>
        </div>
      </tab-container>
    </input-demux>
  </div>
</div>

  </details>

</div>

      <h2 id="blob-path" class="breadcrumb flex-auto flex-self-center min-width-0 text-normal mx-2 width-full width-md-auto flex-order-1 flex-md-order-none mt-3 mt-md-0">
        <span class="js-repo-root text-bold"><span class="js-path-segment d-inline-block wb-break-all"><a data-pjax="#repo-content-pjax-container" href="https://github.com/denis-kiprop/alx-low_level_programming"><span>alx-low_level_programming</span></a></span></span><span class="separator">/</span><span class="js-path-segment d-inline-block wb-break-all"><a data-pjax="#repo-content-pjax-container" href="https://github.com/denis-kiprop/alx-low_level_programming/tree/master/0x13-more_singly_linked_lists"><span>0x13-more_singly_linked_lists</span></a></span><span class="separator">/</span><strong class="final-path">101-print_listint_safe.c</strong>
      </h2>
      <a href="https://github.com/denis-kiprop/alx-low_level_programming/find/master" class="js-pjax-capture-input btn mr-2 d-none d-md-block" data-pjax="" data-hotkey="t">
        Go to file
      </a>

      <details id="blob-more-options-details" data-view-component="true" class="details-overlay details-reset position-relative" open="">
  <summary role="button" data-view-component="true" class="btn">
  
            <svg aria-label="More options" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-kebab-horizontal">
    <path d="M8 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zM1.5 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zm13 0a1.5 1.5 0 100-3 1.5 1.5 0 000 3z"></path>
</svg>

  

</summary>
  <div data-view-component="true">          <ul class="dropdown-menu dropdown-menu-sw">
            <li class="d-block d-md-none">
              <a class="dropdown-item d-flex flex-items-baseline" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;FIND_FILE_BUTTON&quot;,&quot;repository_id&quot;:400076709,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="d7de410ebe6ca383a5953466e8339337acaf65e4fb6a2b50d2c9fd3c75cc29bb" data-ga-click="Repository, find file, location:repo overview" data-hotkey="t" data-pjax="true" href="https://github.com/denis-kiprop/alx-low_level_programming/find/master">
                <span class="flex-auto">Go to file</span>
                <span class="text-small color-text-secondary" aria-hidden="true">T</span>
</a>            </li>
            <li data-toggle-for="blob-more-options-details">
              <button data-toggle-for="jumpto-line-details-dialog" type="button" data-view-component="true" class="dropdown-item btn-link">
  
  
                <span class="d-flex flex-items-baseline">
                  <span class="flex-auto">Go to line</span>
                  <span class="text-small color-text-secondary" aria-hidden="true">L</span>
                </span>

  

</button>            </li>
            <li class="dropdown-divider" role="none"></li>
            <li>
              <clipboard-copy data-toggle-for="blob-more-options-details" aria-label="Copy path" value="0x13-more_singly_linked_lists/101-print_listint_safe.c" data-view-component="true" class="dropdown-item cursor-pointer" tabindex="0" role="button">
    
                Copy path

</clipboard-copy>            </li>
            <li>
              <clipboard-copy data-toggle-for="blob-more-options-details" aria-label="Copy permalink" value="https://github.com/denis-kiprop/alx-low_level_programming/blob/4f1435f02b6c185b6371864bffd642490142e3e4/0x13-more_singly_linked_lists/101-print_listint_safe.c" data-view-component="true" class="dropdown-item cursor-pointer" tabindex="0" role="button">
    
                <span class="d-flex flex-items-baseline">
                  <span class="flex-auto">Copy permalink</span>
                </span>

</clipboard-copy>            </li>
          </ul>
</div>
</details>    </div>




    <div class="Box d-flex flex-column flex-shrink-0 mb-3">
      

  <div class="Box-header Details js-details-container">
      <div class="d-flex flex-items-center">
        <span class="flex-shrink-0 ml-n1 mr-n1 mt-n1 mb-n1">
          <a rel="author" data-skip-pjax="true" data-hovercard-type="user" data-hovercard-url="/users/denis-kiprop/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="https://github.com/denis-kiprop"><img class="avatar avatar-user" src="./101-print_listint_safe_files/85315669" width="24" height="24" alt="@denis-kiprop"></a>
        </span>
        <div class="flex-1 d-flex flex-items-center ml-3 min-width-0">
          <div class="css-truncate css-truncate-overflow">
            <a class="text-bold Link--primary" rel="author" data-hovercard-type="user" data-hovercard-url="/users/denis-kiprop/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="https://github.com/denis-kiprop">denis-kiprop</a>

              <span class="markdown-title">
                <a data-pjax="true" title="prints a listint_t linked list." class="Link--secondary" href="https://github.com/denis-kiprop/alx-low_level_programming/commit/c221c9ad94fd9be19b167e7d0a49fcca1bb61466">prints a listint_t linked list.</a>
              </span>
          </div>


          <span class="ml-2">
            
          </span>
        </div>
        <div class="ml-3 d-flex flex-shrink-0 flex-items-center flex-justify-end color-text-secondary no-wrap">
          <span class="d-none d-md-inline">
            <span>Latest commit</span>
            <a class="text-small text-mono Link--secondary" href="https://github.com/denis-kiprop/alx-low_level_programming/commit/c221c9ad94fd9be19b167e7d0a49fcca1bb61466" data-pjax="">c221c9a</a>
            <span itemprop="dateModified"><relative-time datetime="2021-10-12T07:16:07Z" class="no-wrap" title="Oct 12, 2021, 10:16 AM GMT+3">10 hours ago</relative-time></span>
          </span>

          <a data-pjax="" href="https://github.com/denis-kiprop/alx-low_level_programming/commits/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" class="ml-3 no-wrap Link--primary no-underline">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-history">
    <path fill-rule="evenodd" d="M1.643 3.143L.427 1.927A.25.25 0 000 2.104V5.75c0 .138.112.25.25.25h3.646a.25.25 0 00.177-.427L2.715 4.215a6.5 6.5 0 11-1.18 4.458.75.75 0 10-1.493.154 8.001 8.001 0 101.6-5.684zM7.75 4a.75.75 0 01.75.75v2.992l2.028.812a.75.75 0 01-.557 1.392l-2.5-1A.75.75 0 017 8.25v-3.5A.75.75 0 017.75 4z"></path>
</svg>
            <span class="d-none d-sm-inline">
              <strong>History</strong>
            </span>
          </a>
        </div>
      </div>

  </div>

  <div class="Box-body d-flex flex-items-center flex-auto border-bottom-0 flex-wrap">
    <details class="details-reset details-overlay details-overlay-dark lh-default color-text-primary float-left mr-3" id="blob_contributors_box">
      <summary class="Link--primary" role="button">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-people">
    <path fill-rule="evenodd" d="M5.5 3.5a2 2 0 100 4 2 2 0 000-4zM2 5.5a3.5 3.5 0 115.898 2.549 5.507 5.507 0 013.034 4.084.75.75 0 11-1.482.235 4.001 4.001 0 00-7.9 0 .75.75 0 01-1.482-.236A5.507 5.507 0 013.102 8.05 3.49 3.49 0 012 5.5zM11 4a.75.75 0 100 1.5 1.5 1.5 0 01.666 2.844.75.75 0 00-.416.672v.352a.75.75 0 00.574.73c1.2.289 2.162 1.2 2.522 2.372a.75.75 0 101.434-.44 5.01 5.01 0 00-2.56-3.012A3 3 0 0011 4z"></path>
</svg>
        <strong>1</strong>
        
        contributor
      </summary>
      <details-dialog class="Box Box--overlay d-flex flex-column anim-fade-in fast" aria-label="Users who have contributed to this file" src="/denis-kiprop/alx-low_level_programming/contributors-list/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" preload="" role="dialog" aria-modal="true">
        <div class="Box-header">
          <button class="Box-btn-octicon btn-octicon float-right" type="button" aria-label="Close dialog" data-close-dialog="">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 0L8 6.94l3.22-3.22a.75.75 0 111.06 1.06L9.06 8l3.22 3.22a.75.75 0 11-1.06 1.06L8 9.06l-3.22 3.22a.75.75 0 01-1.06-1.06L6.94 8 3.72 4.78a.75.75 0 010-1.06z"></path>
</svg>
          </button>
          <h3 class="Box-title">
            Users who have contributed to this file
          </h3>
        </div>
        <include-fragment>
          <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="32" height="32" viewBox="0 0 16 16" fill="none" data-view-component="true" class="my-3 mx-auto d-block anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
        </include-fragment>
      </details-dialog>
    </details>
  </div>
    </div>




      







  
    <div data-target="readme-toc.content" class="Box mt-3 position-relative
    ">
      
  <div class="Box-header py-2 pr-2 d-flex flex-shrink-0 flex-md-row flex-items-center">


  <div class="text-mono f6 flex-auto pr-3 flex-order-2 flex-md-order-1">

      69 lines (59 sloc)
      <span class="file-info-divider"></span>
    1.01 KB
  </div>

  <div class="d-flex py-1 py-md-0 flex-auto flex-order-1 flex-md-order-2 flex-sm-grow-0 flex-justify-between hide-sm hide-md">
      

    <div class="BtnGroup">
      <a href="https://github.com/denis-kiprop/alx-low_level_programming/raw/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" id="raw-url" role="button" data-view-component="true" class="btn-sm btn BtnGroup-item">
  
  Raw
  

</a>
        <a href="https://github.com/denis-kiprop/alx-low_level_programming/blame/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" data-hotkey="b" role="button" data-view-component="true" class="js-update-url-with-hash btn-sm btn BtnGroup-item">
  
  Blame
  

</a>
    </div>

    <div>
          <a class="btn-octicon tooltipped tooltipped-nw js-remove-unless-platform" data-platforms="windows,mac" href="x-github-client://openRepo/https://github.com/denis-kiprop/alx-low_level_programming?branch=master&amp;filepath=0x13-more_singly_linked_lists%2F101-print_listint_safe.c" aria-label="Open this file in GitHub Desktop" data-ga-click="Repository, open with desktop">
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-device-desktop">
    <path fill-rule="evenodd" d="M1.75 2.5h12.5a.25.25 0 01.25.25v7.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25v-7.5a.25.25 0 01.25-.25zM14.25 1H1.75A1.75 1.75 0 000 2.75v7.5C0 11.216.784 12 1.75 12h3.727c-.1 1.041-.52 1.872-1.292 2.757A.75.75 0 004.75 16h6.5a.75.75 0 00.565-1.243c-.772-.885-1.193-1.716-1.292-2.757h3.727A1.75 1.75 0 0016 10.25v-7.5A1.75 1.75 0 0014.25 1zM9.018 12H6.982a5.72 5.72 0 01-.765 2.5h3.566a5.72 5.72 0 01-.765-2.5z"></path>
</svg>
          </a>

        <remote-clipboard-copy class="d-inline-block btn-octicon" style="height: 26px" data-src="/denis-kiprop/alx-low_level_programming/raw/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" data-action="click:remote-clipboard-copy#remoteCopy" data-catalyst="" data-state-timeout="2000">
  


  <span data-target="remote-clipboard-copy.idle">            <span class="tooltipped tooltipped-nw cursor-pointer" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;COPY_RAW_CONTENTS_BUTTON&quot;,&quot;repository_id&quot;:400076709,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="a232e23936b7526afef1193a323359fabc9eb72d4a5f7c736a401b9159ea82f0" aria-label="Copy raw contents">
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copy">
    <path fill-rule="evenodd" d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 010 1.5h-1.5a.25.25 0 00-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 00.25-.25v-1.5a.75.75 0 011.5 0v1.5A1.75 1.75 0 019.25 16h-7.5A1.75 1.75 0 010 14.25v-7.5z"></path><path fill-rule="evenodd" d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0114.25 11h-7.5A1.75 1.75 0 015 9.25v-7.5zm1.75-.25a.25.25 0 00-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 00.25-.25v-7.5a.25.25 0 00-.25-.25h-7.5z"></path>
</svg>
</span></span>
  <span data-target="remote-clipboard-copy.fetching" hidden="">            <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="16" height="16" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
</span>
  <span data-target="remote-clipboard-copy.success" hidden="">            <span class="tooltipped tooltipped-nw" aria-label="Copied!">
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check color-text-success">
    <path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path>
</svg>
            </span>
</span>
  <span data-target="remote-clipboard-copy.error" hidden="">            <span class="tooltipped tooltipped-nw" aria-label="Something went wrong. Try again.">
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert color-text-warning">
    <path fill-rule="evenodd" d="M8.22 1.754a.25.25 0 00-.44 0L1.698 13.132a.25.25 0 00.22.368h12.164a.25.25 0 00.22-.368L8.22 1.754zm-1.763-.707c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0114.082 15H1.918a1.75 1.75 0 01-1.543-2.575L6.457 1.047zM9 11a1 1 0 11-2 0 1 1 0 012 0zm-.25-5.25a.75.75 0 00-1.5 0v2.5a.75.75 0 001.5 0v-2.5z"></path>
</svg>
            </span>
</span>
</remote-clipboard-copy>
          <!-- '"` --><!-- </textarea></xmp> --><form class="inline-form js-update-url-with-hash" action="https://github.com/denis-kiprop/alx-low_level_programming/edit/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="tCiwnKyZds605WMH5eB7l7/4jTrJMja+FT7u+1iRrFa3uxrrS1luePXxO/vvyuKs9rFhZEJv8vRK1Ei0Yeg0hg==">
            <button class="btn-octicon tooltipped tooltipped-nw" type="submit" aria-label="Fork this project and edit the file" data-hotkey="e" data-disable-with="">
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-pencil">
    <path fill-rule="evenodd" d="M11.013 1.427a1.75 1.75 0 012.474 0l1.086 1.086a1.75 1.75 0 010 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 01-.927-.928l.929-3.25a1.75 1.75 0 01.445-.758l8.61-8.61zm1.414 1.06a.25.25 0 00-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 000-.354l-1.086-1.086zM11.189 6.25L9.75 4.81l-6.286 6.287a.25.25 0 00-.064.108l-.558 1.953 1.953-.558a.249.249 0 00.108-.064l6.286-6.286z"></path>
</svg>
            </button>
</form>
          <!-- '"` --><!-- </textarea></xmp> --><form class="inline-form" action="https://github.com/denis-kiprop/alx-low_level_programming/delete/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="304nr+gvyd8KNnURMeYLo2NZ0FwM1U9UP+6bOPviwMArzGBIshcQy+fkOpFuxh6FvGyQh3EMjhktS7awv42Scw==">
            <button class="btn-octicon btn-octicon-danger tooltipped tooltipped-nw" type="submit" aria-label="Fork this project and delete the file" data-disable-with="">
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-trash">
    <path fill-rule="evenodd" d="M6.5 1.75a.25.25 0 01.25-.25h2.5a.25.25 0 01.25.25V3h-3V1.75zm4.5 0V3h2.25a.75.75 0 010 1.5H2.75a.75.75 0 010-1.5H5V1.75C5 .784 5.784 0 6.75 0h2.5C10.216 0 11 .784 11 1.75zM4.496 6.675a.75.75 0 10-1.492.15l.66 6.6A1.75 1.75 0 005.405 15h5.19c.9 0 1.652-.681 1.741-1.576l.66-6.6a.75.75 0 00-1.492-.149l-.66 6.6a.25.25 0 01-.249.225h-5.19a.25.25 0 01-.249-.225l-.66-6.6z"></path>
</svg>
            </button>
</form>    </div>
  </div>

    <div class="d-flex hide-lg hide-xl flex-order-2 flex-grow-0">
      <details class="dropdown details-reset details-overlay d-inline-block">
        <summary class="btn-octicon" aria-haspopup="true" aria-label="possible actions">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-kebab-horizontal">
    <path d="M8 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zM1.5 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zm13 0a1.5 1.5 0 100-3 1.5 1.5 0 000 3z"></path>
</svg>
        </summary>

        <ul class="dropdown-menu dropdown-menu-sw" style="width: 175px">
            <li>
                <a class="dropdown-item tooltipped tooltipped-nw js-remove-unless-platform" data-platforms="windows,mac" href="x-github-client://openRepo/https://github.com/denis-kiprop/alx-low_level_programming?branch=master&amp;filepath=0x13-more_singly_linked_lists%2F101-print_listint_safe.c" data-ga-click="Repository, open with desktop">
                  Open with Desktop
                </a>
            </li>
          <li>
            <a class="dropdown-item" href="https://github.com/denis-kiprop/alx-low_level_programming/raw/master/0x13-more_singly_linked_lists/101-print_listint_safe.c">
              View raw
            </a>
          </li>
            <li>
              <remote-clipboard-copy class="dropdown-item" data-src="/denis-kiprop/alx-low_level_programming/raw/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" data-action="click:remote-clipboard-copy#remoteCopy" data-catalyst="" data-state-timeout="2000">
  

  <span data-target="remote-clipboard-copy.idle">                  <span class="cursor-pointer" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;COPY_RAW_CONTENTS_BUTTON&quot;,&quot;repository_id&quot;:400076709,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="a232e23936b7526afef1193a323359fabc9eb72d4a5f7c736a401b9159ea82f0">
                    Copy raw contents
</span></span>
  <span data-target="remote-clipboard-copy.fetching" hidden="">                  Copy raw contents
                  <span class="d-inline-block position-relative" style="top: 3px">
                    <svg aria-label="fetching contents…" style="box-sizing: content-box; color: var(--color-icon-primary);" width="16" height="16" viewBox="0 0 16 16" fill="none" data-view-component="true" class="anim-rotate">
  <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke"></circle>
  <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>
                  </span>
</span>
  <span data-target="remote-clipboard-copy.success" hidden="">                  Copy raw contents
                  <svg aria-label="Copied!" role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check color-text-success">
    <path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path>
</svg>
</span>
  <span data-target="remote-clipboard-copy.error" hidden="">                  Copy raw contents
                  <svg aria-label="Something went wrong. Try again." role="img" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert color-text-warning">
    <path fill-rule="evenodd" d="M8.22 1.754a.25.25 0 00-.44 0L1.698 13.132a.25.25 0 00.22.368h12.164a.25.25 0 00.22-.368L8.22 1.754zm-1.763-.707c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0114.082 15H1.918a1.75 1.75 0 01-1.543-2.575L6.457 1.047zM9 11a1 1 0 11-2 0 1 1 0 012 0zm-.25-5.25a.75.75 0 00-1.5 0v2.5a.75.75 0 001.5 0v-2.5z"></path>
</svg>
</span>
</remote-clipboard-copy>            </li>
            <li>
              <a class="dropdown-item" href="https://github.com/denis-kiprop/alx-low_level_programming/blame/master/0x13-more_singly_linked_lists/101-print_listint_safe.c">
                View blame
              </a>
            </li>

              <li class="dropdown-divider" role="none"></li>
              <li>
                <a class="dropdown-item" href="https://github.com/denis-kiprop/alx-low_level_programming/edit/master/0x13-more_singly_linked_lists/101-print_listint_safe.c">Edit file</a>
              </li>
              <li>
                <a class="dropdown-item menu-item-danger" href="https://github.com/denis-kiprop/alx-low_level_programming/delete/master/0x13-more_singly_linked_lists/101-print_listint_safe.c">Delete file</a>
              </li>
        </ul>
      </details>
    </div>
</div>


      
  <div itemprop="text" class="Box-body p-0 blob-wrapper data type-c  gist-border-0">

      
<table class="highlight tab-size js-file-line-container" data-tab-size="8" data-paste-markdown-skip="">
      <tbody><tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">"</span>lists.h<span class="pl-pds">"</span></span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>*</span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * free_listp - frees a linked list</span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * @head: head of a list.</span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Return: no return.</span></td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">free_listp</span>(<span class="pl-c1">listp_t</span> **head)</td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">listp_t</span> *temp;</td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">listp_t</span> *curr;</td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (head != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line">		curr = *head;</td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">while</span> ((temp = curr) != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line">			curr = curr-&gt;<span class="pl-smi">next</span>;</td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">free</span>(temp);</td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line">		*head = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>*</span></td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * print_listint_safe - prints a linked list.</span></td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * @head: head of a list.</span></td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Return: number of nodes in the list.</span></td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">size_t</span> <span class="pl-en">print_listint_safe</span>(<span class="pl-k">const</span> <span class="pl-c1">listint_t</span> *head)</td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">size_t</span> nnodes = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">listp_t</span> *hptr, *new, *add;</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code blob-code-inner js-file-line">	hptr = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">while</span> (head != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code blob-code-inner js-file-line">		new = <span class="pl-c1">malloc</span>(<span class="pl-k">sizeof</span>(<span class="pl-c1">listp_t</span>));</td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (new == <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">exit</span>(<span class="pl-c1">98</span>);</td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code blob-code-inner js-file-line">		new-&gt;<span class="pl-smi">p</span> = (<span class="pl-k">void</span> *)head;</td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code blob-code-inner js-file-line">		new-&gt;<span class="pl-smi">next</span> = hptr;</td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code blob-code-inner js-file-line">		hptr = new;</td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code blob-code-inner js-file-line">		add = hptr;</td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">while</span> (add-&gt;<span class="pl-smi">next</span> != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code blob-code-inner js-file-line">			add = add-&gt;<span class="pl-smi">next</span>;</td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> (head == add-&gt;<span class="pl-smi">p</span>)</td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code blob-code-inner js-file-line">			{</td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">printf</span>(<span class="pl-s"><span class="pl-pds">"</span>-&gt; [<span class="pl-c1">%p</span>] <span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">"</span></span>, (<span class="pl-k">void</span> *)head, head-&gt;<span class="pl-smi">n</span>);</td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">free_listp</span>(&amp;hptr);</td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">return</span> (nnodes);</td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code blob-code-inner js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">printf</span>(<span class="pl-s"><span class="pl-pds">"</span>[<span class="pl-c1">%p</span>] <span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">"</span></span>, (<span class="pl-k">void</span> *)head, head-&gt;<span class="pl-smi">n</span>);</td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code blob-code-inner js-file-line">		head = head-&gt;<span class="pl-smi">next</span>;</td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code blob-code-inner js-file-line">		nnodes++;</td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">free_listp</span>(&amp;hptr);</td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> (nnodes);</td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
</tbody></table>

  <details class="details-reset details-overlay BlobToolbar position-absolute js-file-line-actions dropdown d-none" aria-hidden="true">
    <summary class="btn-octicon ml-0 px-2 p-0 color-bg-primary border color-border-tertiary rounded-1" aria-label="Inline file action toolbar" aria-haspopup="menu" role="button">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-kebab-horizontal">
    <path d="M8 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zM1.5 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zm13 0a1.5 1.5 0 100-3 1.5 1.5 0 000 3z"></path>
</svg>
    </summary>
    <details-menu role="menu">

      <ul class="BlobToolbar-dropdown dropdown-menu dropdown-menu-se ml-2 mt-2" style="width:185px">
        <li>
          <clipboard-copy role="menuitem" class="dropdown-item" id="js-copy-lines" style="cursor:pointer;" aria-label="Copy lines" tabindex="0">
            Copy lines
          </clipboard-copy>
        </li>
        <li>
          <clipboard-copy role="menuitem" class="dropdown-item" id="js-copy-permalink" style="cursor:pointer;" aria-label="Copy permalink" tabindex="0">
            Copy permalink
          </clipboard-copy>
        </li>
        <li><a class="dropdown-item js-update-url-with-hash" id="js-view-git-blame" role="menuitem" href="https://github.com/denis-kiprop/alx-low_level_programming/blame/4f1435f02b6c185b6371864bffd642490142e3e4/0x13-more_singly_linked_lists/101-print_listint_safe.c">View git blame</a></li>
          <li><a class="dropdown-item" id="js-new-issue" role="menuitem" href="https://github.com/denis-kiprop/alx-low_level_programming/issues/new">Reference in new issue</a></li>
      </ul>
    </details-menu>
  </details>

  </div>

    </div>


  

  <details class="details-reset details-overlay details-overlay-dark" id="jumpto-line-details-dialog">
    <summary data-hotkey="l" aria-label="Jump to line" role="button"></summary>
    <details-dialog class="Box Box--overlay d-flex flex-column anim-fade-in fast linejump" aria-label="Jump to line" role="dialog" aria-modal="true">
      <!-- '"` --><!-- </textarea></xmp> --><form class="js-jump-to-line-form Box-body d-flex" action="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c" accept-charset="UTF-8" method="get">
        <input class="form-control flex-auto mr-3 linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line…" aria-label="Jump to line" autofocus="">
        <button data-close-dialog="" type="submit" data-view-component="true" class="btn">
  
  Go
  

</button>
</form>    </details-dialog>
  </details>


</div>



  </div>
</div>

    </main>
  </div>

  


  </div>

          
<div class="footer container-xl width-full p-responsive" role="contentinfo">
  <div class="position-relative d-flex flex-row-reverse flex-lg-row flex-wrap flex-lg-nowrap flex-justify-center flex-lg-justify-between pt-6 pb-2 mt-6 f6 color-fg-muted border-top color-border-muted ">
    <ul class="list-style-none d-flex flex-wrap col-12 col-lg-5 flex-justify-center flex-lg-justify-between mb-2 mb-lg-0">
      <li class="mr-3 mr-lg-0">© 2021 GitHub, Inc.</li>
        <li class="mr-3 mr-lg-0"><a href="https://docs.github.com/en/github/site-policy/github-terms-of-service" data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to terms&quot;,&quot;label&quot;:&quot;text:terms&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="fd435d43b84337c389c6ebb128cf29ea389b249c8e12e044749a21ca2af3cee1">Terms</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://docs.github.com/en/github/site-policy/github-privacy-statement" data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to privacy&quot;,&quot;label&quot;:&quot;text:privacy&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="0942e32981a3d2e7ade0745712da43daaee53ca7c36391615d0b1d4e5a717199">Privacy</a></li>
        <li class="mr-3 mr-lg-0"><a data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to security&quot;,&quot;label&quot;:&quot;text:security&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="d9d21f240010e5146aaa5549379b0463c3db75dac3b61744a8d1126fe8aad242" href="https://github.com/security">Security</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://www.githubstatus.com/" data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to status&quot;,&quot;label&quot;:&quot;text:status&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="6ec4d1873701949328f63dd750999ce321bd361346e0ad2b29f33e1e6737aa61">Status</a></li>
        <li><a data-ga-click="Footer, go to help, text:Docs" href="https://docs.github.com/">Docs</a></li>
    </ul>

    <a aria-label="Homepage" title="GitHub" class="footer-octicon d-none d-lg-block mx-lg-4" href="https://github.com/">
      <svg aria-hidden="true" height="24" viewBox="0 0 16 16" version="1.1" width="24" data-view-component="true" class="octicon octicon-mark-github">
    <path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path>
</svg>
</a>
    <ul class="list-style-none d-flex flex-wrap col-12 col-lg-5 flex-justify-center flex-lg-justify-between mb-2 mb-lg-0">
        <li class="mr-3 mr-lg-0"><a href="https://support.github.com/?tags=dotcom-footer" data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to contact&quot;,&quot;label&quot;:&quot;text:contact&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="6a69d56677819c0f4a28357302bdd50489547ea3e896ec657a97b4d944d425a4">Contact GitHub</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://github.com/pricing" data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to Pricing&quot;,&quot;label&quot;:&quot;text:Pricing&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="6a70d1e523405f88eeebf38a271181279a190508a89c90e5831dca61e7806a85">Pricing</a></li>
      <li class="mr-3 mr-lg-0"><a href="https://docs.github.com/" data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to api&quot;,&quot;label&quot;:&quot;text:api&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="1221be103ec6004f53bdae64210166660fe4d3b6816b6f891c52cd51403a2bfa">API</a></li>
      <li class="mr-3 mr-lg-0"><a href="https://services.github.com/" data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to training&quot;,&quot;label&quot;:&quot;text:training&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="8756bde9b4017962cc0f9a369b894dcab86cb098bf3aba30373d61824084274c">Training</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://github.blog/" data-hydro-click="{&quot;event_type&quot;:&quot;analytics.event&quot;,&quot;payload&quot;:{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to blog&quot;,&quot;label&quot;:&quot;text:blog&quot;,&quot;originating_url&quot;:&quot;https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c&quot;,&quot;user_id&quot;:84763233}}" data-hydro-click-hmac="7c636b2d4733a82d1272c101a002b0ed1cfd642d6e53a400526d6d6203fe5e5c">Blog</a></li>
        <li><a data-ga-click="Footer, go to about, text:about" href="https://github.com/about">About</a></li>
    </ul>
  </div>
  <div class="d-flex flex-justify-center pb-6">
    <span class="f6 color-fg-muted"></span>
  </div>
</div>



  <div id="ajax-error-message" class="ajax-error-message flash flash-error" hidden="">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path fill-rule="evenodd" d="M8.22 1.754a.25.25 0 00-.44 0L1.698 13.132a.25.25 0 00.22.368h12.164a.25.25 0 00.22-.368L8.22 1.754zm-1.763-.707c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0114.082 15H1.918a1.75 1.75 0 01-1.543-2.575L6.457 1.047zM9 11a1 1 0 11-2 0 1 1 0 012 0zm-.25-5.25a.75.75 0 00-1.5 0v2.5a.75.75 0 001.5 0v-2.5z"></path>
</svg>
    <button type="button" class="flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 0L8 6.94l3.22-3.22a.75.75 0 111.06 1.06L9.06 8l3.22 3.22a.75.75 0 11-1.06 1.06L8 9.06l-3.22 3.22a.75.75 0 01-1.06-1.06L6.94 8 3.72 4.78a.75.75 0 010-1.06z"></path>
</svg>
    </button>
    You can’t perform that action at this time.
  </div>

  <div class="js-stale-session-flash flash flash-warn flash-banner" hidden="">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path fill-rule="evenodd" d="M8.22 1.754a.25.25 0 00-.44 0L1.698 13.132a.25.25 0 00.22.368h12.164a.25.25 0 00.22-.368L8.22 1.754zm-1.763-.707c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0114.082 15H1.918a1.75 1.75 0 01-1.543-2.575L6.457 1.047zM9 11a1 1 0 11-2 0 1 1 0 012 0zm-.25-5.25a.75.75 0 00-1.5 0v2.5a.75.75 0 001.5 0v-2.5z"></path>
</svg>
    <span class="js-stale-session-flash-signed-in" hidden="">You signed in with another tab or window. <a href="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c">Reload</a> to refresh your session.</span>
    <span class="js-stale-session-flash-signed-out" hidden="">You signed out in another tab or window. <a href="https://github.com/denis-kiprop/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c">Reload</a> to refresh your session.</span>
  </div>
    <template id="site-details-dialog"></template>

    <div class="Popover js-hovercard-content position-absolute" style="display: none; outline: none;" tabindex="0">
  <div class="Popover-message Popover-message--bottom-left Popover-message--large Box color-shadow-large" style="width:360px;">
  </div>
</div>

    <template id="snippet-clipboard-copy-button"></template>


    <style>
      .user-mention[href$="/kaleabtdk"] {
        color: var(--color-user-mention-fg);
        background-color: var(--color-user-mention-bg);
        border-radius: 2px;
        margin-left: -2px;
        margin-right: -2px;
        padding: 0 2px;
      }
    </style>


  


<div aria-live="polite" class="sr-only"></div></body><grammarly-desktop-integration data-grammarly-shadow-root="true"></grammarly-desktop-integration></html>