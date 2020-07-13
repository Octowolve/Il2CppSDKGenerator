#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SPVPGameModeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SPVPGameModeConfConfig"));
	}

	template <typename T = uintptr_t> T& ModeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& NotifyRoundEndByTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& NotifyRoundEndByScore() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = int32_t> T& NotifyRoundEndValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& GameMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& GameModeType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_BriefDesc() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& IconResource() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& LOCID_Cond1Desc1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& LOCID_Cond1Desc2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Cond1_Value() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& LOCID_Cond2Desc1() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& LOCID_Cond2Desc2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Cond2_Value() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& MinPlayer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& MaxPlayer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& Open() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& NotifyRoundEndType() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& LadderOpen() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Mode_Tag() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& Spvp_open() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& Ladder_open() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = bool> T& Room_open() {
		return *(T*)((uintptr_t)this + 0x62);
	}
	template <typename T = int32_t> T& Spvp_weekend_open() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& Room_weekend_open() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_ModeType() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E93C4))(this);
	}
	template <typename T = void> T set_ModeType(uintptr_t value) {
		return ((T (*)(SPVPGameModeConfConfig*, uintptr_t))(Il2CppBase() + 0x30E93CC))(this, value);
	}
	template <typename T = bool> T get_NotifyRoundEndByTime() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E93D4))(this);
	}
	template <typename T = void> T set_NotifyRoundEndByTime(bool value) {
		return ((T (*)(SPVPGameModeConfConfig*, bool))(Il2CppBase() + 0x30E93DC))(this, value);
	}
	template <typename T = bool> T get_NotifyRoundEndByScore() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E93E4))(this);
	}
	template <typename T = void> T set_NotifyRoundEndByScore(bool value) {
		return ((T (*)(SPVPGameModeConfConfig*, bool))(Il2CppBase() + 0x30E93EC))(this, value);
	}
	template <typename T = int32_t> T get_NotifyRoundEndValue() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E93F4))(this);
	}
	template <typename T = void> T set_NotifyRoundEndValue(int32_t value) {
		return ((T (*)(SPVPGameModeConfConfig*, int32_t))(Il2CppBase() + 0x30E93FC))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E9404))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E9654))(this);
	}
	template <typename T = int32_t> T get_GameMode() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E96F4))(this);
	}
	template <typename T = void> T set_GameMode(int32_t value) {
		return ((T (*)(SPVPGameModeConfConfig*, int32_t))(Il2CppBase() + 0x30E96FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_GameModeType() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E9644))(this);
	}
	template <typename T = void> T set_GameModeType(Il2CppString* value) {
		return ((T (*)(SPVPGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E9704))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E970C))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(SPVPGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E9714))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E971C))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E972C))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(SPVPGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E9734))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E973C))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_BriefDesc() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E974C))(this);
	}
	template <typename T = void> T set_LOCID_BriefDesc(Il2CppString* value) {
		return ((T (*)(SPVPGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E9754))(this, value);
	}
	template <typename T = Il2CppString*> T get_BriefDesc() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E975C))(this);
	}
	template <typename T = Il2CppString*> T get_IconResource() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E976C))(this);
	}
	template <typename T = void> T set_IconResource(Il2CppString* value) {
		return ((T (*)(SPVPGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E9774))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Cond1Desc1() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E977C))(this);
	}
	template <typename T = void> T set_LOCID_Cond1Desc1(Il2CppString* value) {
		return ((T (*)(SPVPGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E9784))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cond1Desc1() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E978C))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Cond1Desc2() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E979C))(this);
	}
	template <typename T = void> T set_LOCID_Cond1Desc2(Il2CppString* value) {
		return ((T (*)(SPVPGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E97A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cond1Desc2() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E97AC))(this);
	}
	template <typename T = int32_t> T get_Cond1_Value() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E97BC))(this);
	}
	template <typename T = void> T set_Cond1_Value(int32_t value) {
		return ((T (*)(SPVPGameModeConfConfig*, int32_t))(Il2CppBase() + 0x30E97C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Cond2Desc1() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E97CC))(this);
	}
	template <typename T = void> T set_LOCID_Cond2Desc1(Il2CppString* value) {
		return ((T (*)(SPVPGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E97D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cond2Desc1() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E97DC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Cond2Desc2() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E97EC))(this);
	}
	template <typename T = void> T set_LOCID_Cond2Desc2(Il2CppString* value) {
		return ((T (*)(SPVPGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E97F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cond2Desc2() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E97FC))(this);
	}
	template <typename T = int32_t> T get_Cond2_Value() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E980C))(this);
	}
	template <typename T = void> T set_Cond2_Value(int32_t value) {
		return ((T (*)(SPVPGameModeConfConfig*, int32_t))(Il2CppBase() + 0x30E9814))(this, value);
	}
	template <typename T = int32_t> T get_MinPlayer() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E981C))(this);
	}
	template <typename T = void> T set_MinPlayer(int32_t value) {
		return ((T (*)(SPVPGameModeConfConfig*, int32_t))(Il2CppBase() + 0x30E9824))(this, value);
	}
	template <typename T = int32_t> T get_MaxPlayer() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E982C))(this);
	}
	template <typename T = void> T set_MaxPlayer(int32_t value) {
		return ((T (*)(SPVPGameModeConfConfig*, int32_t))(Il2CppBase() + 0x30E9834))(this, value);
	}
	template <typename T = bool> T get_Open() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E983C))(this);
	}
	template <typename T = void> T set_Open(bool value) {
		return ((T (*)(SPVPGameModeConfConfig*, bool))(Il2CppBase() + 0x30E9844))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_NotifyRoundEndType() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E964C))(this);
	}
	template <typename T = void> T set_NotifyRoundEndType(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPGameModeConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30E984C))(this, value);
	}
	template <typename T = bool> T get_LadderOpen() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E9854))(this);
	}
	template <typename T = void> T set_LadderOpen(bool value) {
		return ((T (*)(SPVPGameModeConfConfig*, bool))(Il2CppBase() + 0x30E985C))(this, value);
	}
	template <typename T = int32_t> T get_Mode_Tag() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E9864))(this);
	}
	template <typename T = void> T set_Mode_Tag(int32_t value) {
		return ((T (*)(SPVPGameModeConfConfig*, int32_t))(Il2CppBase() + 0x30E986C))(this, value);
	}
	template <typename T = bool> T get_Spvp_open() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E9874))(this);
	}
	template <typename T = void> T set_Spvp_open(bool value) {
		return ((T (*)(SPVPGameModeConfConfig*, bool))(Il2CppBase() + 0x30E987C))(this, value);
	}
	template <typename T = bool> T get_Ladder_open() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E9884))(this);
	}
	template <typename T = void> T set_Ladder_open(bool value) {
		return ((T (*)(SPVPGameModeConfConfig*, bool))(Il2CppBase() + 0x30E988C))(this, value);
	}
	template <typename T = bool> T get_Room_open() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E9894))(this);
	}
	template <typename T = void> T set_Room_open(bool value) {
		return ((T (*)(SPVPGameModeConfConfig*, bool))(Il2CppBase() + 0x30E989C))(this, value);
	}
	template <typename T = int32_t> T get_Spvp_weekend_open() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E98A4))(this);
	}
	template <typename T = void> T set_Spvp_weekend_open(int32_t value) {
		return ((T (*)(SPVPGameModeConfConfig*, int32_t))(Il2CppBase() + 0x30E98AC))(this, value);
	}
	template <typename T = int32_t> T get_Room_weekend_open() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E98B4))(this);
	}
	template <typename T = void> T set_Room_weekend_open(int32_t value) {
		return ((T (*)(SPVPGameModeConfConfig*, int32_t))(Il2CppBase() + 0x30E98BC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SPVPGameModeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E98C4))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SPVPGameModeConfConfig*))(Il2CppBase() + 0x30E9C98))(this);
	}

};

}
