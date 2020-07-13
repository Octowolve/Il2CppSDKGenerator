#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IAnimationComponentCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IAnimationComponentCallBack"));
	}


	template <typename T = void> T OnAnimatorCleared() {
		return ((T (*)(IAnimationComponentCallBack*))(Il2CppBase() + 0x0))(this);
	}

};

}
