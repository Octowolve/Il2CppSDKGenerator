#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IesConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IesConfig"));
	}

	template <typename T = Il2CppString*> T& formatInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& m_keywordValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& tiltType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& includedTiltInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& tiltFileName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& numberOfLamps() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = double> T& lumenPerLamp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = double> T& candelaMultiplier() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& numberOfVerticalAngles() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& numberOfHorizontalAngles() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& photometricType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& unitsType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = double> T& width() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = double> T& length() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = double> T& height() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = double> T& ballastFactor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = double> T& futureUse() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = double> T& inputWatts() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_verticalAngles() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_horizontalAngles() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& m_rawCandelaIntensity() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveKeyword() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTiltInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRawData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRawIntensityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaximumRawIntensityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVerticalAngles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHorizontalAngles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRawIntensityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppString*> T get_formatInfo() {
		return ((T (*)(IesConfig*))(Il2CppBase() + 0x4980594))(this);
	}
	template <typename T = void> T set_formatInfo(Il2CppString* value) {
		return ((T (*)(IesConfig*, Il2CppString*))(Il2CppBase() + 0x498058C))(this, value);
	}
	template <typename T = uintptr_t> T get_tiltType() {
		return ((T (*)(IesConfig*))(Il2CppBase() + 0x498059C))(this);
	}
	template <typename T = void> T set_tiltType(uintptr_t value) {
		return ((T (*)(IesConfig*, uintptr_t))(Il2CppBase() + 0x49805A4))(this, value);
	}
	template <typename T = uintptr_t> T get_includedTiltInfo() {
		return ((T (*)(IesConfig*))(Il2CppBase() + 0x49805AC))(this);
	}
	template <typename T = void> T set_includedTiltInfo(uintptr_t value) {
		return ((T (*)(IesConfig*, uintptr_t))(Il2CppBase() + 0x49805B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_tiltFileName() {
		return ((T (*)(IesConfig*))(Il2CppBase() + 0x49805BC))(this);
	}
	template <typename T = void> T set_tiltFileName(Il2CppString* value) {
		return ((T (*)(IesConfig*, Il2CppString*))(Il2CppBase() + 0x49805C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Item(Il2CppString* keyword) {
		return ((T (*)(IesConfig*, Il2CppString*))(Il2CppBase() + 0x49805CC))(this, keyword);
	}
	template <typename T = void> T set_Item(Il2CppString* keyword, Il2CppString* value) {
		return ((T (*)(IesConfig*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x498066C))(this, keyword, value);
	}
	template <typename T = void> T RemoveKeyword(Il2CppString* keyword) {
		return ((T (*)(IesConfig*, Il2CppString*))(Il2CppBase() + 0x49807C8))(this, keyword);
	}
	template <typename T = void> T SetTiltInfo(uintptr_t tiltType, uintptr_t includedInfo, Il2CppString* tiltFileName) {
		return ((T (*)(IesConfig*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x498089C))(this, tiltType, includedInfo, tiltFileName);
	}
	template <typename T = double> T get_Item_1(int32_t verticalAngleIndex, int32_t horizontalAngleIndex) {
		return ((T (*)(IesConfig*, int32_t, int32_t))(Il2CppBase() + 0x4980984))(this, verticalAngleIndex, horizontalAngleIndex);
	}
	template <typename T = void> T SetRawData(int32_t verticalAngleIndex, int32_t horizontalAngleIndex, double value) {
		return ((T (*)(IesConfig*, int32_t, int32_t, double))(Il2CppBase() + 0x4980AC8))(this, verticalAngleIndex, horizontalAngleIndex, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_VerticalAngles() {
		return ((T (*)(IesConfig*))(Il2CppBase() + 0x4980CB0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_HorizontalAngles() {
		return ((T (*)(IesConfig*))(Il2CppBase() + 0x4980CB8))(this);
	}
	template <typename T = double> T GetRawIntensityData(int32_t verticalIndex, int32_t horizontalIndex) {
		return ((T (*)(IesConfig*, int32_t, int32_t))(Il2CppBase() + 0x4980CC0))(this, verticalIndex, horizontalIndex);
	}
	template <typename T = double> T GetMaximumRawIntensityData() {
		return ((T (*)(IesConfig*))(Il2CppBase() + 0x4980DE4))(this);
	}
	template <typename T = void> T SetVerticalAngles(Il2CppArray<uintptr_t>* verticalAngles, bool check) {
		return ((T (*)(IesConfig*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4980F48))(this, verticalAngles, check);
	}
	template <typename T = void> T SetHorizontalAngles(Il2CppArray<uintptr_t>* horizontalAngles, bool check) {
		return ((T (*)(IesConfig*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4981324))(this, horizontalAngles, check);
	}
	template <typename T = void> T SetRawIntensityData(Il2CppList<Il2CppArray<uintptr_t>*>* rawData) {
		return ((T (*)(IesConfig*, Il2CppList<Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x49813F0))(this, rawData);
	}

};

}
