#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SPMModeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SPMModeConfConfig"));
	}

	template <typename T = uintptr_t> T& EMissionType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MissionId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& IconResource() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& BGResource() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& PreviewResource() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Rating() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& MapId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& Show() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& MissionType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& GoPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& PosUniq() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& StartLvl() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& EndLvl() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& ULTConfig() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Duration() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& WeekDay() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& FinishCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& PreMissionId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MissionsList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& Rank() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& ForceSelect() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSPMissionListOfSpecifiedID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6924))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T FindSPMissionListOfSpecifiedID(int32_t missionID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30E69D0))(0, missionID);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6C38))(this);
	}
	template <typename T = int32_t> T get_MissionId() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6CD8))(this);
	}
	template <typename T = void> T set_MissionId(int32_t value) {
		return ((T (*)(SPMModeConfConfig*, int32_t))(Il2CppBase() + 0x30E6CE0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6CE8))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(SPMModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E6CF0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6CF8))(this);
	}
	template <typename T = Il2CppString*> T get_IconResource() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6D08))(this);
	}
	template <typename T = void> T set_IconResource(Il2CppString* value) {
		return ((T (*)(SPMModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E6D10))(this, value);
	}
	template <typename T = Il2CppString*> T get_BGResource() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6D18))(this);
	}
	template <typename T = void> T set_BGResource(Il2CppString* value) {
		return ((T (*)(SPMModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E6D20))(this, value);
	}
	template <typename T = Il2CppString*> T get_PreviewResource() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6D28))(this);
	}
	template <typename T = void> T set_PreviewResource(Il2CppString* value) {
		return ((T (*)(SPMModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E6D30))(this, value);
	}
	template <typename T = int32_t> T get_Rating() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6D38))(this);
	}
	template <typename T = void> T set_Rating(int32_t value) {
		return ((T (*)(SPMModeConfConfig*, int32_t))(Il2CppBase() + 0x30E6D40))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6D48))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(SPMModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E6D50))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6D58))(this);
	}
	template <typename T = int32_t> T get_MapId() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6D68))(this);
	}
	template <typename T = void> T set_MapId(int32_t value) {
		return ((T (*)(SPMModeConfConfig*, int32_t))(Il2CppBase() + 0x30E6D70))(this, value);
	}
	template <typename T = bool> T get_Show() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6D78))(this);
	}
	template <typename T = void> T set_Show(bool value) {
		return ((T (*)(SPMModeConfConfig*, bool))(Il2CppBase() + 0x30E6D80))(this, value);
	}
	template <typename T = int32_t> T get_MissionType() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E69C8))(this);
	}
	template <typename T = void> T set_MissionType(int32_t value) {
		return ((T (*)(SPMModeConfConfig*, int32_t))(Il2CppBase() + 0x30E6D88))(this, value);
	}
	template <typename T = int32_t> T get_GoPos() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6D90))(this);
	}
	template <typename T = void> T set_GoPos(int32_t value) {
		return ((T (*)(SPMModeConfConfig*, int32_t))(Il2CppBase() + 0x30E6D98))(this, value);
	}
	template <typename T = bool> T get_PosUniq() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6DA0))(this);
	}
	template <typename T = void> T set_PosUniq(bool value) {
		return ((T (*)(SPMModeConfConfig*, bool))(Il2CppBase() + 0x30E6DA8))(this, value);
	}
	template <typename T = int32_t> T get_StartLvl() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6DB0))(this);
	}
	template <typename T = void> T set_StartLvl(int32_t value) {
		return ((T (*)(SPMModeConfConfig*, int32_t))(Il2CppBase() + 0x30E6DB8))(this, value);
	}
	template <typename T = int32_t> T get_EndLvl() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6DC0))(this);
	}
	template <typename T = void> T set_EndLvl(int32_t value) {
		return ((T (*)(SPMModeConfConfig*, int32_t))(Il2CppBase() + 0x30E6DC8))(this, value);
	}
	template <typename T = bool> T get_ULTConfig() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6DD0))(this);
	}
	template <typename T = void> T set_ULTConfig(bool value) {
		return ((T (*)(SPMModeConfConfig*, bool))(Il2CppBase() + 0x30E6DD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_StartTime() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6DE0))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppString* value) {
		return ((T (*)(SPMModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E6DE8))(this, value);
	}
	template <typename T = Il2CppString*> T get_EndTime() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6DF0))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppString* value) {
		return ((T (*)(SPMModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E6DF8))(this, value);
	}
	template <typename T = int32_t> T get_Duration() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6E00))(this);
	}
	template <typename T = void> T set_Duration(int32_t value) {
		return ((T (*)(SPMModeConfConfig*, int32_t))(Il2CppBase() + 0x30E6E08))(this, value);
	}
	template <typename T = int32_t> T get_WeekDay() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6E10))(this);
	}
	template <typename T = void> T set_WeekDay(int32_t value) {
		return ((T (*)(SPMModeConfConfig*, int32_t))(Il2CppBase() + 0x30E6E18))(this, value);
	}
	template <typename T = int32_t> T get_FinishCount() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6E20))(this);
	}
	template <typename T = void> T set_FinishCount(int32_t value) {
		return ((T (*)(SPMModeConfConfig*, int32_t))(Il2CppBase() + 0x30E6E28))(this, value);
	}
	template <typename T = int32_t> T get_PreMissionId() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6E30))(this);
	}
	template <typename T = void> T set_PreMissionId(int32_t value) {
		return ((T (*)(SPMModeConfConfig*, int32_t))(Il2CppBase() + 0x30E6E38))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MissionsList() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6C30))(this);
	}
	template <typename T = void> T set_MissionsList(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPMModeConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30E6E40))(this, value);
	}
	template <typename T = Il2CppString*> T get_Rank() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6E48))(this);
	}
	template <typename T = void> T set_Rank(Il2CppString* value) {
		return ((T (*)(SPMModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E6E50))(this, value);
	}
	template <typename T = bool> T get_ForceSelect() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E6E58))(this);
	}
	template <typename T = void> T set_ForceSelect(bool value) {
		return ((T (*)(SPMModeConfConfig*, bool))(Il2CppBase() + 0x30E6E60))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SPMModeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E6E68))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SPMModeConfConfig*))(Il2CppBase() + 0x30E7204))(this);
	}

};

}
