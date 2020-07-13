#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class StopFireResMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "StopFireResMsg"));
	}

	template <typename T = unsigned char> T& RightOrLeft() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseInDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuildResponseMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T UseInDeadReplay() {
		return ((T (*)(StopFireResMsg*))(Il2CppBase() + 0x4E9E2D4))(this);
	}
	template <typename T = int32_t> static T OnBuildResponseMsg(Il2CppArray<uintptr_t>* data, int32_t DataIndex, int32_t DataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4E9E374))(0, data, DataIndex, DataCount, Sequence);
	}
	template <typename T = bool> T xLuaBaseProxy_UseInDeadReplay() {
		return ((T (*)(StopFireResMsg*))(Il2CppBase() + 0x4E9E568))(this);
	}

};

}
