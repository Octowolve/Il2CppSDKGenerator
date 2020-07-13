#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CareerModeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CareerModeConfConfig"));
	}

	template <typename T = uintptr_t> T& EModeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_ModeCategory() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ModeType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& ModeCategoryStr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& DefaultMapType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ModeUplimit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ModeDownLimit() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeCategoryByMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCareerModeConfByModeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeNameByModeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_ModeCategory() {
		return ((T (*)(CareerModeConfConfig*))(Il2CppBase() + 0x2D5C164))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(CareerModeConfConfig*))(Il2CppBase() + 0x2D5C16C))(this);
	}
	template <typename T = uintptr_t> static T GetConf(uintptr_t modeType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D5C2A0))(0, modeType);
	}
	template <typename T = uintptr_t> static T GetModeCategoryByMode(int32_t modeId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D5C3F8))(0, modeId);
	}
	template <typename T = uintptr_t> static T GetCareerModeConfByModeId(uintptr_t mode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D5C57C))(0, mode);
	}
	template <typename T = Il2CppString*> static T GetModeNameByModeId(uintptr_t gameMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D5C6F8))(0, gameMode);
	}
	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(CareerModeConfConfig*))(Il2CppBase() + 0x2D5C820))(this);
	}
	template <typename T = Il2CppString*> T get_ModeType() {
		return ((T (*)(CareerModeConfConfig*))(Il2CppBase() + 0x2D5C290))(this);
	}
	template <typename T = void> T set_ModeType(Il2CppString* value) {
		return ((T (*)(CareerModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5C8C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModeCategoryStr() {
		return ((T (*)(CareerModeConfConfig*))(Il2CppBase() + 0x2D5C298))(this);
	}
	template <typename T = void> T set_ModeCategoryStr(Il2CppString* value) {
		return ((T (*)(CareerModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5C8C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(CareerModeConfConfig*))(Il2CppBase() + 0x2D5C8D0))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(CareerModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5C8D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CareerModeConfConfig*))(Il2CppBase() + 0x2D5C810))(this);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(CareerModeConfConfig*))(Il2CppBase() + 0x2D5C8E0))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(CareerModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5C8E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_DefaultMapType() {
		return ((T (*)(CareerModeConfConfig*))(Il2CppBase() + 0x2D5C8F0))(this);
	}
	template <typename T = void> T set_DefaultMapType(Il2CppString* value) {
		return ((T (*)(CareerModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5C8F8))(this, value);
	}
	template <typename T = int32_t> T get_ModeUplimit() {
		return ((T (*)(CareerModeConfConfig*))(Il2CppBase() + 0x2D5C900))(this);
	}
	template <typename T = void> T set_ModeUplimit(int32_t value) {
		return ((T (*)(CareerModeConfConfig*, int32_t))(Il2CppBase() + 0x2D5C908))(this, value);
	}
	template <typename T = int32_t> T get_ModeDownLimit() {
		return ((T (*)(CareerModeConfConfig*))(Il2CppBase() + 0x2D5C910))(this);
	}
	template <typename T = void> T set_ModeDownLimit(int32_t value) {
		return ((T (*)(CareerModeConfConfig*, int32_t))(Il2CppBase() + 0x2D5C918))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CareerModeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D5C920))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(CareerModeConfConfig*))(Il2CppBase() + 0x2D5CB0C))(this);
	}

};

}
