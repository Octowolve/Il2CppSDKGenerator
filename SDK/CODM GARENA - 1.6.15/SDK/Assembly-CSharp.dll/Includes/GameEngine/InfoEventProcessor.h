#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InfoEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InfoEventProcessor"));
	}

	template <typename T = uintptr_t> T& EventChannel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_AttackableInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_bIsInit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RegisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_AttackableInfo() {
		return ((T (*)(InfoEventProcessor*))(Il2CppBase() + 0x370A3D0))(this);
	}
	template <typename T = bool> T get_bIsInit() {
		return ((T (*)(InfoEventProcessor*))(Il2CppBase() + 0x370A3D8))(this);
	}
	template <typename T = void> T PreInit(uintptr_t info) {
		return ((T (*)(InfoEventProcessor*, uintptr_t))(Il2CppBase() + 0x370A3E0))(this, info);
	}
	template <typename T = void> T Init() {
		return ((T (*)(InfoEventProcessor*))(Il2CppBase() + 0x370A4B8))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(InfoEventProcessor*))(Il2CppBase() + 0x370A55C))(this);
	}
	template <typename T = void> T RegisterHandler(uint32_t commandId, void* handler) {
		return ((T (*)(InfoEventProcessor*, uint32_t, void*))(Il2CppBase() + 0x370A620))(this, commandId, handler);
	}
	template <typename T = void> T RegisterHandler_1(uintptr_t matchType, void* handler) {
		return ((T (*)(InfoEventProcessor*, uintptr_t, void*))(Il2CppBase() + 0x370A704))(this, matchType, handler);
	}
	template <typename T = bool> T OnEvent(uintptr_t Msg) {
		return ((T (*)(InfoEventProcessor*, uintptr_t))(Il2CppBase() + 0x370A7E8))(this, Msg);
	}

};

}
