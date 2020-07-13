#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WheelInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WheelInfo"));
	}

	template <typename T = float> T& wheelRadius() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& wheelTrans() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
