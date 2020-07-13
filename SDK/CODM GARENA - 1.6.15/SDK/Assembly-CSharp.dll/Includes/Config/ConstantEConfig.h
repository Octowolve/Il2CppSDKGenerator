#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConstantEConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConstantEConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& EnumName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Constant() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConstantValueByeEnumName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConstantFloatValueByeEnumName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvailableTeamType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLowerAndUpperRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWithFriendsInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StringToHexInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeasonVideoNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeakPromptArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMPModeFilterMinLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMpLadderRandomPlaylistId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = int32_t> static T GetConstantValueByeEnumName(uintptr_t enumType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4639F04))(0, enumType);
	}
	template <typename T = float> static T GetConstantFloatValueByeEnumName(uintptr_t enumType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x463A0F4))(0, enumType);
	}
	template <typename T = int32_t> static T GetAvailableTeamType(int32_t teamType) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x463A28C))(0, teamType);
	}
	template <typename T = void> static T GetLowerAndUpperRange(uintptr_t enumType, uintptr_t lower, uintptr_t upper) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x463A3A4))(0, enumType, lower, upper);
	}
	template <typename T = void> static T GetWithFriendsInfo(uintptr_t bShow, uintptr_t roomUIType, uintptr_t numLower) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x463A4BC))(0, bShow, roomUIType, numLower);
	}
	template <typename T = bool> static T StringToHexInt(Il2CppString* str, uintptr_t num) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x463A6F0))(0, str, num);
	}
	template <typename T = int32_t> static T GetSeasonVideoNumber() {
		return ((T (*)(void *))(Il2CppBase() + 0x463A98C))(0);
	}
	template <typename T = int32_t> static T GetWeakPromptArrow() {
		return ((T (*)(void *))(Il2CppBase() + 0x463AAB4))(0);
	}
	template <typename T = int32_t> static T GetMPModeFilterMinLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x463ABDC))(0);
	}
	template <typename T = int32_t> static T GetMpLadderRandomPlaylistId() {
		return ((T (*)(void *))(Il2CppBase() + 0x463AD04))(0);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ConstantEConfig*))(Il2CppBase() + 0x463AE2C))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(ConstantEConfig*))(Il2CppBase() + 0x463AECC))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(ConstantEConfig*, int32_t))(Il2CppBase() + 0x463AED4))(this, value);
	}
	template <typename T = Il2CppString*> T get_EnumName() {
		return ((T (*)(ConstantEConfig*))(Il2CppBase() + 0x463AEDC))(this);
	}
	template <typename T = void> T set_EnumName(Il2CppString* value) {
		return ((T (*)(ConstantEConfig*, Il2CppString*))(Il2CppBase() + 0x463AEE4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Constant() {
		return ((T (*)(ConstantEConfig*))(Il2CppBase() + 0x463AEEC))(this);
	}
	template <typename T = void> T set_Constant(Il2CppString* value) {
		return ((T (*)(ConstantEConfig*, Il2CppString*))(Il2CppBase() + 0x463AEF4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ConstantEConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x463AEFC))(this, bytes, position);
	}
	template <typename T = Il2CppString*> static T GetValue(uintptr_t configEnum) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4639FE4))(0, configEnum);
	}

};

}
