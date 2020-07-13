#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PracticeGameModeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PracticeGameModeConfConfig"));
	}

	template <typename T = uintptr_t> T& ModeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& GameMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& GameModeType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_BriefDesc() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& IconResource() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_Cond1Desc1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& LOCID_Cond1Desc2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Cond1_Value() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& LOCID_Cond2Desc1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& LOCID_Cond2Desc2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Cond2_Value() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& MinPlayer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& MaxPlayer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& Open() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& NotifyRoundEndType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& LadderOpen() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Mode_Tag() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& Spvp_open() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& Ladder_open() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = bool> T& Room_open() {
		return *(T*)((uintptr_t)this + 0x5A);
	}
	template <typename T = int32_t> T& Spvp_weekend_open() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Room_weekend_open() {
		return *(T*)((uintptr_t)this + 0x60);
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
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783C6C))(this);
	}
	template <typename T = void> T set_ModeType(uintptr_t value) {
		return ((T (*)(PracticeGameModeConfConfig*, uintptr_t))(Il2CppBase() + 0x3783C74))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783C7C))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783D88))(this);
	}
	template <typename T = int32_t> T get_GameMode() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783E28))(this);
	}
	template <typename T = void> T set_GameMode(int32_t value) {
		return ((T (*)(PracticeGameModeConfConfig*, int32_t))(Il2CppBase() + 0x3783E30))(this, value);
	}
	template <typename T = Il2CppString*> T get_GameModeType() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783D80))(this);
	}
	template <typename T = void> T set_GameModeType(Il2CppString* value) {
		return ((T (*)(PracticeGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x3783E38))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783E40))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(PracticeGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x3783E48))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783E50))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783E60))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(PracticeGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x3783E68))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783E70))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_BriefDesc() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783E80))(this);
	}
	template <typename T = void> T set_LOCID_BriefDesc(Il2CppString* value) {
		return ((T (*)(PracticeGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x3783E88))(this, value);
	}
	template <typename T = Il2CppString*> T get_BriefDesc() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783E90))(this);
	}
	template <typename T = Il2CppString*> T get_IconResource() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783EA0))(this);
	}
	template <typename T = void> T set_IconResource(Il2CppString* value) {
		return ((T (*)(PracticeGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x3783EA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Cond1Desc1() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783EB0))(this);
	}
	template <typename T = void> T set_LOCID_Cond1Desc1(Il2CppString* value) {
		return ((T (*)(PracticeGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x3783EB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cond1Desc1() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783EC0))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Cond1Desc2() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783ED0))(this);
	}
	template <typename T = void> T set_LOCID_Cond1Desc2(Il2CppString* value) {
		return ((T (*)(PracticeGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x3783ED8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cond1Desc2() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783EE0))(this);
	}
	template <typename T = int32_t> T get_Cond1_Value() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783EF0))(this);
	}
	template <typename T = void> T set_Cond1_Value(int32_t value) {
		return ((T (*)(PracticeGameModeConfConfig*, int32_t))(Il2CppBase() + 0x3783EF8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Cond2Desc1() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783F00))(this);
	}
	template <typename T = void> T set_LOCID_Cond2Desc1(Il2CppString* value) {
		return ((T (*)(PracticeGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x3783F08))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cond2Desc1() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783F10))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Cond2Desc2() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783F20))(this);
	}
	template <typename T = void> T set_LOCID_Cond2Desc2(Il2CppString* value) {
		return ((T (*)(PracticeGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x3783F28))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cond2Desc2() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783F30))(this);
	}
	template <typename T = int32_t> T get_Cond2_Value() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783F40))(this);
	}
	template <typename T = void> T set_Cond2_Value(int32_t value) {
		return ((T (*)(PracticeGameModeConfConfig*, int32_t))(Il2CppBase() + 0x3783F48))(this, value);
	}
	template <typename T = int32_t> T get_MinPlayer() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783F50))(this);
	}
	template <typename T = void> T set_MinPlayer(int32_t value) {
		return ((T (*)(PracticeGameModeConfConfig*, int32_t))(Il2CppBase() + 0x3783F58))(this, value);
	}
	template <typename T = int32_t> T get_MaxPlayer() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783F60))(this);
	}
	template <typename T = void> T set_MaxPlayer(int32_t value) {
		return ((T (*)(PracticeGameModeConfConfig*, int32_t))(Il2CppBase() + 0x3783F68))(this, value);
	}
	template <typename T = bool> T get_Open() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783F70))(this);
	}
	template <typename T = void> T set_Open(bool value) {
		return ((T (*)(PracticeGameModeConfConfig*, bool))(Il2CppBase() + 0x3783F78))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_NotifyRoundEndType() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783F80))(this);
	}
	template <typename T = void> T set_NotifyRoundEndType(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PracticeGameModeConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3783F88))(this, value);
	}
	template <typename T = bool> T get_LadderOpen() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783F90))(this);
	}
	template <typename T = void> T set_LadderOpen(bool value) {
		return ((T (*)(PracticeGameModeConfConfig*, bool))(Il2CppBase() + 0x3783F98))(this, value);
	}
	template <typename T = int32_t> T get_Mode_Tag() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783FA0))(this);
	}
	template <typename T = void> T set_Mode_Tag(int32_t value) {
		return ((T (*)(PracticeGameModeConfConfig*, int32_t))(Il2CppBase() + 0x3783FA8))(this, value);
	}
	template <typename T = bool> T get_Spvp_open() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783FB0))(this);
	}
	template <typename T = void> T set_Spvp_open(bool value) {
		return ((T (*)(PracticeGameModeConfConfig*, bool))(Il2CppBase() + 0x3783FB8))(this, value);
	}
	template <typename T = bool> T get_Ladder_open() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783FC0))(this);
	}
	template <typename T = void> T set_Ladder_open(bool value) {
		return ((T (*)(PracticeGameModeConfConfig*, bool))(Il2CppBase() + 0x3783FC8))(this, value);
	}
	template <typename T = bool> T get_Room_open() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783FD0))(this);
	}
	template <typename T = void> T set_Room_open(bool value) {
		return ((T (*)(PracticeGameModeConfConfig*, bool))(Il2CppBase() + 0x3783FD8))(this, value);
	}
	template <typename T = int32_t> T get_Spvp_weekend_open() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783FE0))(this);
	}
	template <typename T = void> T set_Spvp_weekend_open(int32_t value) {
		return ((T (*)(PracticeGameModeConfConfig*, int32_t))(Il2CppBase() + 0x3783FE8))(this, value);
	}
	template <typename T = int32_t> T get_Room_weekend_open() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x3783FF0))(this);
	}
	template <typename T = void> T set_Room_weekend_open(int32_t value) {
		return ((T (*)(PracticeGameModeConfConfig*, int32_t))(Il2CppBase() + 0x3783FF8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PracticeGameModeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3784000))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(PracticeGameModeConfConfig*))(Il2CppBase() + 0x37843D4))(this);
	}

};

}
