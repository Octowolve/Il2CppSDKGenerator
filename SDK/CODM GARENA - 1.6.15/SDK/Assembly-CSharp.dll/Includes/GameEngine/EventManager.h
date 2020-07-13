#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EventManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EventManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_EventHandlerArray() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MatchEventHandlerArray() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LobbyEventHandlerArray() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterMatchEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterMatchEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterLobbyEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterLobbyEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_SendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_SendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SendUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BroadcastUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_BroadcastUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_SendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix6_SendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendMatchEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLobbyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T RegisterEventHandler(uintptr_t type, void* eventHandler) {
		return ((T (*)(EventManager*, uintptr_t, void*))(Il2CppBase() + 0x51BC9C8))(this, type, eventHandler);
	}
	template <typename T = void> T UnregisterEventHandler(uintptr_t type) {
		return ((T (*)(EventManager*, uintptr_t))(Il2CppBase() + 0x51BCAF4))(this, type);
	}
	template <typename T = void> T RegisterMatchEventHandler(uintptr_t type, void* eventHandler) {
		return ((T (*)(EventManager*, uintptr_t, void*))(Il2CppBase() + 0x51BCBD0))(this, type, eventHandler);
	}
	template <typename T = void> T UnregisterMatchEventHandler(uintptr_t type) {
		return ((T (*)(EventManager*, uintptr_t))(Il2CppBase() + 0x51BCCFC))(this, type);
	}
	template <typename T = void> T RegisterLobbyEventHandler(uintptr_t type, void* eventHandler) {
		return ((T (*)(EventManager*, uintptr_t, void*))(Il2CppBase() + 0x51BCDD8))(this, type, eventHandler);
	}
	template <typename T = void> T UnregisterLobbyEventHandler(uintptr_t type) {
		return ((T (*)(EventManager*, uintptr_t))(Il2CppBase() + 0x51BCF04))(this, type);
	}
	template <typename T = void> T SendEvent(uintptr_t msg) {
		return ((T (*)(EventManager*, uintptr_t))(Il2CppBase() + 0x51BCFE0))(this, msg);
	}
	template <typename T = void> T SendEvent_1(uintptr_t msg) {
		return ((T (*)(EventManager*, uintptr_t))(Il2CppBase() + 0x51BD154))(this, msg);
	}
	template <typename T = void> T SendEvent_2(uintptr_t msg) {
		return ((T (*)(EventManager*, uintptr_t))(Il2CppBase() + 0x51BD270))(this, msg);
	}
	template <typename T = void> T SendEvent_3(uintptr_t type, uint32_t id) {
		return ((T (*)(EventManager*, uintptr_t, uint32_t))(Il2CppBase() + 0x51BD370))(this, type, id);
	}
	template <typename T = void> T SendEvent_4(uintptr_t type, uint32_t id, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(EventManager*, uintptr_t, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51BD4DC))(this, type, id, args);
	}
	template <typename T = void> T SendUIEvent(uint32_t id) {
		return ((T (*)(EventManager*, uint32_t))(Il2CppBase() + 0x51BD650))(this, id);
	}
	template <typename T = void> T SendUIEvent_1(uint32_t id, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(EventManager*, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51BD704))(this, id, args);
	}
	template <typename T = void> T BroadcastUIEvent(uint32_t id) {
		return ((T (*)(EventManager*, uint32_t))(Il2CppBase() + 0x51BD7D4))(this, id);
	}
	template <typename T = void> T BroadcastUIEvent_1(uint32_t id, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(EventManager*, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51BD934))(this, id, args);
	}
	template <typename T = void> T SendEvent_5(uint32_t playerId, uint32_t id) {
		return ((T (*)(EventManager*, uint32_t, uint32_t))(Il2CppBase() + 0x51BDAA0))(this, playerId, id);
	}
	template <typename T = void> T SendEvent_6(uint32_t playerId, uint32_t id, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(EventManager*, uint32_t, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51BDC08))(this, playerId, id, args);
	}
	template <typename T = void> T SendMatchEvent(uintptr_t msg) {
		return ((T (*)(EventManager*, uintptr_t))(Il2CppBase() + 0x51BDD78))(this, msg);
	}
	template <typename T = void> T SendLobbyEvent(uintptr_t msg) {
		return ((T (*)(EventManager*, uintptr_t))(Il2CppBase() + 0x51BDE28))(this, msg);
	}

};

}
