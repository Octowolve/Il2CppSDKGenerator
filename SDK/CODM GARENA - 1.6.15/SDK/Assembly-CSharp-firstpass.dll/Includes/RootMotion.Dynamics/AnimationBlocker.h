#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class AnimationBlocker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "AnimationBlocker"));
	}


	template <typename T = void> T LateUpdate() {
		return ((T (*)(AnimationBlocker*))(Il2CppBase() + 0x38A3E14))(this);
	}

};

}
