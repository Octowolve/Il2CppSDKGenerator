#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RectInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RectInfo"));
	}

	template <typename T = uintptr_t> T& UIType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& Pos() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppQuaternion> T& Rot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& UISize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& Vects() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& Changed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& FOV() {
		return *(T*)((uintptr_t)this + 0x34);
	}


};

}
