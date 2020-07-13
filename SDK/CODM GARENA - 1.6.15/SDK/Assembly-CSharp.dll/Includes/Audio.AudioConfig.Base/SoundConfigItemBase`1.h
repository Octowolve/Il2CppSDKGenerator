#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.AudioConfig.Base {

class SoundConfigItemBase1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.AudioConfig.Base", "SoundConfigItemBase`1"));
	}

	template <typename T = uintptr_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mStrValues() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigHex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigUInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RetrieveCustomizeField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoFillPrimitiveField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetConfigString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetConfigInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetConfigBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetConfigUInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetConfigFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndexOfKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__ReadKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__ReadValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValueFromString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_ID() {
		return ((T (*)(SoundConfigItemBase1*))(Il2CppBase() + 0x47159A0))(this);
	}
	template <typename T = Il2CppString*> T GetConfigString(Il2CppString* strKey, Il2CppArray<uintptr_t>* arrKeys) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47159A8))(this, strKey, arrKeys);
	}
	template <typename T = int32_t> T GetConfigHex(Il2CppString* strKey, Il2CppArray<uintptr_t>* arrKeys) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4715B4C))(this, strKey, arrKeys);
	}
	template <typename T = int32_t> T GetConfigInt(Il2CppString* strKey, Il2CppArray<uintptr_t>* arrKeys) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4715D04))(this, strKey, arrKeys);
	}
	template <typename T = bool> T GetConfigBool(Il2CppString* strKey, Il2CppArray<uintptr_t>* arrKeys) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4715E9C))(this, strKey, arrKeys);
	}
	template <typename T = uint32_t> T GetConfigUInt(Il2CppString* strKey, Il2CppArray<uintptr_t>* arrKeys) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4716038))(this, strKey, arrKeys);
	}
	template <typename T = float> T GetConfigFloat(Il2CppString* strKey, Il2CppArray<uintptr_t>* arrKeys) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47161D0))(this, strKey, arrKeys);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadKeys(Il2CppString* strLine, int32_t iItemCount) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppString*, int32_t))(Il2CppBase() + 0x4716374))(this, strLine, iItemCount);
	}
	template <typename T = bool> T ReadConfigs(Il2CppString* strLine, int32_t iItemCount, Il2CppArray<uintptr_t>* strKeys, Il2CppArray<uintptr_t>* pCustomFieldInfos) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppString*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47164F4))(this, strLine, iItemCount, strKeys, pCustomFieldInfos);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T RetrieveCustomizeField(Il2CppArray<uintptr_t>* arrKeys) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47166CC))(this, arrKeys);
	}
	template <typename T = void> T AutoFillPrimitiveField(Il2CppArray<uintptr_t>* strKeys, Il2CppArray<uintptr_t>* pCustomFieldInfos) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4716A7C))(this, strKeys, pCustomFieldInfos);
	}
	template <typename T = Il2CppString*> T GetConfigString_1(int32_t iIndex) {
		return ((T (*)(SoundConfigItemBase1*, int32_t))(Il2CppBase() + 0x4717258))(this, iIndex);
	}
	template <typename T = int32_t> T GetConfigInt_1(int32_t iIndex) {
		return ((T (*)(SoundConfigItemBase1*, int32_t))(Il2CppBase() + 0x4717394))(this, iIndex);
	}
	template <typename T = bool> T GetConfigBool_1(int32_t iIndex) {
		return ((T (*)(SoundConfigItemBase1*, int32_t))(Il2CppBase() + 0x471750C))(this, iIndex);
	}
	template <typename T = uint32_t> T GetConfigUInt_1(int32_t iIndex) {
		return ((T (*)(SoundConfigItemBase1*, int32_t))(Il2CppBase() + 0x4717688))(this, iIndex);
	}
	template <typename T = float> T GetConfigFloat_1(int32_t iIndex) {
		return ((T (*)(SoundConfigItemBase1*, int32_t))(Il2CppBase() + 0x4717800))(this, iIndex);
	}
	template <typename T = int32_t> T GetIndexOfKey(Il2CppString* strKey, Il2CppArray<uintptr_t>* arrKeys) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4717984))(this, strKey, arrKeys);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T _ReadKeys(Il2CppString* strLine, int32_t iStartedItem, int32_t iItemCount) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4717B98))(this, strLine, iStartedItem, iItemCount);
	}
	template <typename T = bool> T _ReadValues(Il2CppString* strLine, int32_t iItemCount) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppString*, int32_t))(Il2CppBase() + 0x4717E3C))(this, strLine, iItemCount);
	}
	template <typename T = bool> T GetValueFromString(Il2CppString* strInput, uintptr_t pRetVal) {
		return ((T (*)(SoundConfigItemBase1*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4718188))(this, strInput, pRetVal);
	}
	template <typename T = int32_t> T get_ParseStartIndex() {
		return ((T (*)(SoundConfigItemBase1*))(Il2CppBase() + 0x4718664))(this);
	}

};

}
