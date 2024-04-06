#ifndef _CGO_BOX_H_
#define _CGO_BOX_H_

/**
 * 因为CGO 无法直接调用C++的类
 * 所以我们需要提供一个C的接口
 * 供CGO调用
 *
 * 核心点就是使用: extern "C" { ... }
 * 在内部再提供一个C的接口，供CGO调用；比如这里的Box_volume
 * 然后我们再在CGO中调用这个Box_volume就可以达到调用C++的类的目的
 */

#ifdef __cplusplus
extern "C"
{
#endif

    double Box_volume(double length, double width, double height);

#ifdef __cplusplus
}
#endif

#endif
