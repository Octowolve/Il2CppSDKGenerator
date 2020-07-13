#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRoomCreateReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomCreateRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRoomJoinReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomJoinRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRoomExitReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomExitRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGspRoomTeamInfoReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGspRoomTeamInfoRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGspRoomTeamNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGspRoomStartNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GspRoomWillStartNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_SettlementDS() {
		return ((T (*)(SettlementDataAgent*))(Il2CppBase() + 0x29480E8))(this);
	}
	template <typename T = void> T SendRoomCreateReq() {
		return ((T (*)(SettlementDataAgent*))(Il2CppBase() + 0x2948198))(this);
	}
	template <typename T = bool> T OnRoomCreateRes(uintptr_t message, uintptr_t* err) {
		return ((T (*)(SettlementDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2948490))(this, message, err);
	}
	template <typename T = void> T SendRoomJoinReq() {
		return ((T (*)(SettlementDataAgent*))(Il2CppBase() + 0x2948818))(this);
	}
	template <typename T = bool> T OnRoomJoinRes(uintptr_t message, uintptr_t* err) {
		return ((T (*)(SettlementDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2948B48))(this, message, err);
	}
	template <typename T = void> T SendRoomExitReq() {
		return ((T (*)(SettlementDataAgent*))(Il2CppBase() + 0x2948D60))(this);
	}
	template <typename T = bool> T OnRoomExitRes(uintptr_t message, uintptr_t* err) {
		return ((T (*)(SettlementDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2948F04))(this, message, err);
	}
	template <typename T = void> T SendGspRoomTeamInfoReq() {
		return ((T (*)(SettlementDataAgent*))(Il2CppBase() + 0x29392C8))(this);
	}
	template <typename T = bool> T OnGspRoomTeamInfoRes(uintptr_t message, uintptr_t* err) {
		return ((T (*)(SettlementDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2949070))(this, message, err);
	}
	template <typename T = bool> T OnGspRoomTeamNtf(uintptr_t message, uintptr_t* err) {
		return ((T (*)(SettlementDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x294981C))(this, message, err);
	}
	template <typename T = bool> T OnGspRoomStartNtf(uintptr_t message, uintptr_t* err) {
		return ((T (*)(SettlementDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2949FC4))(this, message, err);
	}
	template <typename T = bool> T GspRoomWillStartNtf(uintptr_t message, uintptr_t* err) {
		return ((T (*)(SettlementDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x294A424))(this, message, err);
	}

};

}
