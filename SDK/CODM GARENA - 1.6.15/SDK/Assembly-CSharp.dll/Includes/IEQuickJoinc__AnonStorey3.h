#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEQuickJoincAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IEQuickJoin>c__AnonStorey3"));
	}

	template <typename T = double> T& startTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$1() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0() {
		return ((T (*)(IEQuickJoincAnonStorey3*))(Il2CppBase() + 0x1D67FC0))(this);
	}
	template <typename T = bool> T m__1() {
		return ((T (*)(IEQuickJoincAnonStorey3*))(Il2CppBase() + 0x1D67FF0))(this);
	}
	template <typename T = bool> T m__2() {
		return ((T (*)(IEQuickJoincAnonStorey3*))(Il2CppBase() + 0x1D68060))(this);
	}
	template <typename T = bool> T m__3() {
		return ((T (*)(IEQuickJoincAnonStorey3*))(Il2CppBase() + 0x1D680D0))(this);
	}

};

}
