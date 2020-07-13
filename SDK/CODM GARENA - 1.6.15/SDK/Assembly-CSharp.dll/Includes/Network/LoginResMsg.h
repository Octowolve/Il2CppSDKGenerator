#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class LoginResMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "LoginResMsg"));
	}

	template <typename T = Il2CppString*> T& nickName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& Location() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppQuaternion> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& ServerTimeMsg() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuildResponseMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> static T OnBuildResponseMsg(Il2CppArray<uintptr_t>* data, int32_t DataIndex, int32_t DataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x482F838))(0, data, DataIndex, DataCount, Sequence);
	}

};

}
