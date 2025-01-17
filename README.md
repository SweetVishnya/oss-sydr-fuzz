# OSS-Sydr-Fuzz: Hybrid Fuzzing for Open Source Software

This repository is a fork of [OSS-Fuzz](https://github.com/google/oss-fuzz)
project. OSS-Sydr-Fuzz contains open source software targets for sydr-fuzz that
combines fuzzing ([libFuzzer](https://www.llvm.org/docs/LibFuzzer.html)) with
the power of dynamic symbolic execution
([Sydr](https://www.ispras.ru/en/technologies/sydr/)).

## Project Structure

Each open source target project provides:

* Fuzz target for libFuzzer
* Fuzz target for Sydr
* Build script
* Dictionary
* Initial seed corpus
* Dockerfile that installs dependencies, builds targets, creates initial corpus,
  etc.
* Hybrid fuzzing configuration file for sydr-fuzz
* Instructions to start hybrid fuzzing

NOTE: Some listed above files may not be present or can be gathered from
external repositories.

## Supported Open Source Projects

* capstone
* cjson
* freeimage
* image-rs
* lcms
* libcbor
* libjpeg-turbo
* openssl
* poco
* postgresql
* rapidjson
* re2
* sqlite3
* tarantool
* xlnt

## Contributing

Feel free to support new fuzz targets. The workflow is following:

1. Compose targets for libFuzzer and Sydr.
2. Prepare build script.
3. Build Dockerfile with all targets.
4. Provide sydr-fuzz configuration files.
5. Write README with commands to run fuzzing.

## Trophies

* FreeImage:
    * <https://sourceforge.net/p/freeimage/bugs/343/>
    * <https://sourceforge.net/p/freeimage/bugs/344/>
    * <https://sourceforge.net/p/freeimage/bugs/345/>
* Tarantool:
    * <https://github.com/tarantool/tarantool/pull/6614>

## Cite Us

### Sydr: Cutting Edge Dynamic Symbolic Execution \[[paper](https://arxiv.org/abs/2011.09269)\] \[[video](https://www.ispras.ru/conf/2020/video/compiler-technology-11-december.mp4#t=6021)\] \[[slides](https://vishnya.xyz/vishnyakov-isprasopen2020.pdf)\]

Vishnyakov A., Fedotov A., Kuts D., Novikov A., Parygina D., Kobrin E., Logunova V., Belecky P., Kurmangaleev Sh. Sydr: Cutting Edge Dynamic Symbolic Execution. 2020 Ivannikov ISPRAS Open Conference (ISPRAS), IEEE, 2020, pp. 46-54. DOI: [10.1109/ISPRAS51486.2020.00014](https://doi.org/10.1109/ISPRAS51486.2020.00014)

```
@inproceedings{vishnyakov20,
  title = {Sydr: Cutting Edge Dynamic Symbolic Execution},
  author = {Vishnyakov, Alexey and Fedotov, Andrey and Kuts, Daniil and Novikov,
            Alexander and Parygina, Darya and Kobrin, Eli and Logunova, Vlada
            and Belecky, Pavel and Kurmangaleev, Shamil},
  booktitle = {2020 Ivannikov ISPRAS Open Conference (ISPRAS)},
  pages = {46--54},
  year = {2020},
  publisher = {IEEE},
  doi = {10.1109/ISPRAS51486.2020.00014},
}
```
