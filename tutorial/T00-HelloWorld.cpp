/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: T00-HelloWorld.cpp
@Time: 2021/6/24 1:03 上午
@Desc: 
***************************/

#include "MyGNode/HelloWorldNode.h"

void tutorial_helloworld() {
    GPipelinePtr pipeline = GPipelineFactory::create();
    GElementPtr hw = nullptr;

    pipeline->registerGElement<HelloWorldNode>(&hw);    // 注册一个helloworld节点
    pipeline->process();    // 运行pipeline
    GPipelineFactory::destroy(pipeline);
}


int main() {
    tutorial_helloworld();
    return 0;
}
