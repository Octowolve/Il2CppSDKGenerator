#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NetSyncModule"));
	}

	template <typename T = uintptr_t> T& m_Processer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RegisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_ModuleType() {
		return ((T (*)(NetSyncModule*))(Il2CppBase() + 0x19D9B88))(this);
	}
	template <typename T = void> T set_ModuleType(uintptr_t value) {
		return ((T (*)(NetSyncModule*, uintptr_t))(Il2CppBase() + 0x19D9B90))(this, value);
	}
	template <typename T = void> T RegisterHandler(uint32_t commandId, void* handler) {
		return ((T (*)(NetSyncModule*, uint32_t, void*))(Il2CppBase() + 0x19D9B98))(this, commandId, handler);
	}
	template <typename T = void> T RegisterHandler_1(uintptr_t matchType, void* handler) {
		return ((T (*)(NetSyncModule*, uintptr_t, void*))(Il2CppBase() + 0x19D512C))(this, matchType, handler);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(NetSyncModule*))(Il2CppBase() + 0x19D5094))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(NetSyncModule*))(Il2CppBase() + 0x19D5330))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(NetSyncModule*))(Il2CppBase() + 0x19D9080))(this);
	}

};

}
