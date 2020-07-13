#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ResPingMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ResPingMsg"));
	}

	template <typename T = uint32_t> T& LocalElapse() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& LocalLogicElapse() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& ServerTimeMs() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint16_t> T& Seq() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint16_t> T& Ping() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = Il2CppString*> T& m_ErrMsg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetErrorMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThreadOnBuildResponseMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_IConcurrentMemoryPoolObject_get_HasRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_IConcurrentMemoryPoolObject_set_HasRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_IConcurrentMemoryPoolObject_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> T GetErrorMsg() {
		return ((T (*)(ResPingMsg*))(Il2CppBase() + 0x4F9D848))(this);
	}
	template <typename T = uintptr_t> static T ThreadOnBuildResponseMsg(Il2CppArray<uintptr_t>* data, int32_t DataIndex, int32_t DataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4F9D8E8))(0, data, DataIndex, DataCount, Sequence);
	}
	template <typename T = bool> T GameEngine_IConcurrentMemoryPoolObject_get_HasRecycle() {
		return ((T (*)(ResPingMsg*))(Il2CppBase() + 0x4F9DC14))(this);
	}
	template <typename T = void> T GameEngine_IConcurrentMemoryPoolObject_set_HasRecycle(bool value) {
		return ((T (*)(ResPingMsg*, bool))(Il2CppBase() + 0x4F9DCBC))(this, value);
	}
	template <typename T = void> T GameEngine_IConcurrentMemoryPoolObject_OnRecycle() {
		return ((T (*)(ResPingMsg*))(Il2CppBase() + 0x4F9DD64))(this);
	}

};

}
