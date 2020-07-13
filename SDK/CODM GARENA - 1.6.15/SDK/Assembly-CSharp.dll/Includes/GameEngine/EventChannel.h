#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EventChannel"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& EventResponseHandlers() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalRegisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUnregisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RegisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_RegisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UnregisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_UnregisterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(EventChannel*))(Il2CppBase() + 0x51BBC00))(this);
	}
	template <typename T = void> T InternalRegisterHandler(uint32_t key, uintptr_t callback) {
		return ((T (*)(EventChannel*, uint32_t, uintptr_t))(Il2CppBase() + 0x51BBC98))(this, key, callback);
	}
	template <typename T = void> T InternalUnregisterHandler(uint32_t key) {
		return ((T (*)(EventChannel*, uint32_t))(Il2CppBase() + 0x51BBDB0))(this, key);
	}
	template <typename T = void> T RegisterHandler(uint32_t commandId, void* callback) {
		return ((T (*)(EventChannel*, uint32_t, void*))(Il2CppBase() + 0x51BBEC8))(this, commandId, callback);
	}
	template <typename T = void> T RegisterHandler_1(uintptr_t matchType, void* callback) {
		return ((T (*)(EventChannel*, uintptr_t, void*))(Il2CppBase() + 0x51BBF94))(this, matchType, callback);
	}
	template <typename T = void> T RegisterHandler_2(uintptr_t lobbyType, void* callback) {
		return ((T (*)(EventChannel*, uintptr_t, void*))(Il2CppBase() + 0x51BC060))(this, lobbyType, callback);
	}
	template <typename T = void> T UnregisterHandler(uint32_t commandId) {
		return ((T (*)(EventChannel*, uint32_t))(Il2CppBase() + 0x51BC12C))(this, commandId);
	}
	template <typename T = void> T UnregisterHandler_1(uintptr_t matchType) {
		return ((T (*)(EventChannel*, uintptr_t))(Il2CppBase() + 0x51BC1DC))(this, matchType);
	}
	template <typename T = void> T UnregisterHandler_2(uintptr_t lobbyType) {
		return ((T (*)(EventChannel*, uintptr_t))(Il2CppBase() + 0x51BC28C))(this, lobbyType);
	}
	template <typename T = bool> T ProcessEvent(uintptr_t msg) {
		return ((T (*)(EventChannel*, uintptr_t))(Il2CppBase() + 0x51BC33C))(this, msg);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(EventChannel*))(Il2CppBase() + 0x51BC7CC))(this);
	}

};

}
