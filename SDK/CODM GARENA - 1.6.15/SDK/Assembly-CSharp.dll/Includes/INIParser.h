#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INIParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INIParser"));
	}

	template <typename T = int32_t> T& error() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Lock() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_FileName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_iniString() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_AutoFlush() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*>*> T& m_Sections() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*>*> T& m_Modified() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_CacheModified() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Open() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Open() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenFromString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseSectionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseKeyValuePair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isComment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformFlush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSectionExists() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsKeyExists() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SectionDelete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeyDelete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeyChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EncodeByteArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecodeByteArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ReadValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_ReadValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_ReadValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_ReadValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_ReadValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix6_ReadValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_WriteValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_WriteValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_WriteValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_WriteValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_WriteValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix6_WriteValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryWriteValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_TryWriteValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = Il2CppString*> T get_FileName() {
		return ((T (*)(INIParser*))(Il2CppBase() + 0x3179924))(this);
	}
	template <typename T = Il2CppString*> T get_iniString() {
		return ((T (*)(INIParser*))(Il2CppBase() + 0x317992C))(this);
	}
	template <typename T = void> T Open(Il2CppString* path) {
		return ((T (*)(INIParser*, Il2CppString*))(Il2CppBase() + 0x3179934))(this, path);
	}
	template <typename T = void> T Open_1(uintptr_t name) {
		return ((T (*)(INIParser*, uintptr_t))(Il2CppBase() + 0x3179B6C))(this, name);
	}
	template <typename T = void> T OpenFromString(Il2CppString* str) {
		return ((T (*)(INIParser*, Il2CppString*))(Il2CppBase() + 0x3179D98))(this, str);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(INIParser*))(Il2CppBase() + 0x3179E54))(this);
	}
	template <typename T = void> T Initialize(Il2CppString* iniString, bool AutoFlush) {
		return ((T (*)(INIParser*, Il2CppString*, bool))(Il2CppBase() + 0x3179AA0))(this, iniString, AutoFlush);
	}
	template <typename T = void> T Close() {
		return ((T (*)(INIParser*))(Il2CppBase() + 0x317A32C))(this);
	}
	template <typename T = Il2CppString*> T ParseSectionName(Il2CppString* Line) {
		return ((T (*)(INIParser*, Il2CppString*))(Il2CppBase() + 0x317B4C0))(this, Line);
	}
	template <typename T = bool> T ParseKeyValuePair(Il2CppString* Line, uintptr_t Key, uintptr_t Value) {
		return ((T (*)(INIParser*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x317B62C))(this, Line, Key, Value);
	}
	template <typename T = bool> T isComment(Il2CppString* Line) {
		return ((T (*)(INIParser*, Il2CppString*))(Il2CppBase() + 0x317B80C))(this, Line);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(INIParser*))(Il2CppBase() + 0x3179EF4))(this);
	}
	template <typename T = void> T PerformFlush() {
		return ((T (*)(INIParser*))(Il2CppBase() + 0x317A438))(this);
	}
	template <typename T = bool> T IsSectionExists(Il2CppString* SectionName) {
		return ((T (*)(INIParser*, Il2CppString*))(Il2CppBase() + 0x317B900))(this, SectionName);
	}
	template <typename T = bool> T IsKeyExists(Il2CppString* SectionName, Il2CppString* Key) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x317B9E0))(this, SectionName, Key);
	}
	template <typename T = void> T SectionDelete(Il2CppString* SectionName) {
		return ((T (*)(INIParser*, Il2CppString*))(Il2CppBase() + 0x317BB4C))(this, SectionName);
	}
	template <typename T = void> T KeyDelete(Il2CppString* SectionName, Il2CppString* Key) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x317BCF8))(this, SectionName, Key);
	}
	template <typename T = void> T KeyChange(Il2CppString* SectionName, Il2CppString* Key, Il2CppString* newKey) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x317BF3C))(this, SectionName, Key, newKey);
	}
	template <typename T = Il2CppString*> T ReadValue(Il2CppString* SectionName, Il2CppString* Key, Il2CppString* DefaultValue) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x317C194))(this, SectionName, Key, DefaultValue);
	}
	template <typename T = void> T WriteValue(Il2CppString* SectionName, Il2CppString* Key, Il2CppString* Value) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x317C360))(this, SectionName, Key, Value);
	}
	template <typename T = Il2CppString*> T EncodeByteArray(Il2CppArray<uintptr_t>* Value) {
		return ((T (*)(INIParser*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x317C7AC))(this, Value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DecodeByteArray(Il2CppString* Value) {
		return ((T (*)(INIParser*, Il2CppString*))(Il2CppBase() + 0x317C9E0))(this, Value);
	}
	template <typename T = bool> T ReadValue_1(Il2CppString* SectionName, Il2CppString* Key, bool DefaultValue) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x317CBD8))(this, SectionName, Key, DefaultValue);
	}
	template <typename T = int32_t> T ReadValue_2(Il2CppString* SectionName, Il2CppString* Key, int32_t DefaultValue) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x317CD30))(this, SectionName, Key, DefaultValue);
	}
	template <typename T = int64_t> T ReadValue_3(Il2CppString* SectionName, Il2CppString* Key, int64_t DefaultValue) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, int64_t))(Il2CppBase() + 0x317CE9C))(this, SectionName, Key, DefaultValue);
	}
	template <typename T = double> T ReadValue_4(Il2CppString* SectionName, Il2CppString* Key, double DefaultValue) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, double))(Il2CppBase() + 0x317D024))(this, SectionName, Key, DefaultValue);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadValue_5(Il2CppString* SectionName, Il2CppString* Key, Il2CppArray<uintptr_t>* DefaultValue) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x317D1A0))(this, SectionName, Key, DefaultValue);
	}
	template <typename T = uintptr_t> T ReadValue_6(Il2CppString* SectionName, Il2CppString* Key, uintptr_t DefaultValue) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x317D32C))(this, SectionName, Key, DefaultValue);
	}
	template <typename T = void> T WriteValue_1(Il2CppString* SectionName, Il2CppString* Key, bool Value) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x317D544))(this, SectionName, Key, Value);
	}
	template <typename T = void> T WriteValue_2(Il2CppString* SectionName, Il2CppString* Key, int32_t Value) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x317D658))(this, SectionName, Key, Value);
	}
	template <typename T = void> T WriteValue_3(Il2CppString* SectionName, Il2CppString* Key, int64_t Value) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, int64_t))(Il2CppBase() + 0x317D788))(this, SectionName, Key, Value);
	}
	template <typename T = void> T WriteValue_4(Il2CppString* SectionName, Il2CppString* Key, double Value) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, double))(Il2CppBase() + 0x317D8C0))(this, SectionName, Key, Value);
	}
	template <typename T = void> T WriteValue_5(Il2CppString* SectionName, Il2CppString* Key, Il2CppArray<uintptr_t>* Value) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x317D9F4))(this, SectionName, Key, Value);
	}
	template <typename T = void> T WriteValue_6(Il2CppString* SectionName, Il2CppString* Key, uintptr_t Value) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x317DAD8))(this, SectionName, Key, Value);
	}
	template <typename T = bool> T TryWriteValue(Il2CppString* SectionName, Il2CppString* Key, int32_t newValue) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x317DC40))(this, SectionName, Key, newValue);
	}
	template <typename T = bool> T TryWriteValue_1(Il2CppString* SectionName, Il2CppString* Key, Il2CppString* newValue) {
		return ((T (*)(INIParser*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x317DD40))(this, SectionName, Key, newValue);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(INIParser*))(Il2CppBase() + 0x317DEA4))(this);
	}

};

}
