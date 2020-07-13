#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigSerializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigSerializer"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeserializeHeader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Hash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Hash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadHeader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadBody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ReadBody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadRawCheck_Editor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E41D24))(0, bytes, position);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T Deserialize_1(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x45F3110))(0, bytes, position);
	}
	template <typename T = void> static T DeserializeHeader(Il2CppArray<uintptr_t>* bytes, uintptr_t* keyRawPositionDic, Il2CppArray<uintptr_t>** keyArray, Il2CppArray<uintptr_t>** columnList) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t*, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x1E7BF58))(0, bytes, keyRawPositionDic, keyArray, columnList);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T Hash(Il2CppArray<uintptr_t>* configs) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45F344C))(0, configs);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<uintptr_t, uintptr_t>*>*> static T Hash_1(Il2CppArray<uintptr_t>* configs) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45F4364))(0, configs);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<uintptr_t, Il2CppDictionary<uintptr_t, uintptr_t>*>*>*> static T Hash_2(Il2CppArray<uintptr_t>* configs) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45F3BB8))(0, configs);
	}
	template <typename T = void> static T ReadHeader(Il2CppArray<uintptr_t>* bytes, uintptr_t position, Il2CppArray<uintptr_t>** rowList, Il2CppArray<uintptr_t>** columnList) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x4639428))(0, bytes, position, rowList, columnList);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ReadBody(Il2CppArray<uintptr_t>* bytes, int32_t headerOffset, Il2CppArray<uintptr_t>* rowList, Il2CppArray<uintptr_t>* columnList) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E41EB4))(0, bytes, headerOffset, rowList, columnList);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T ReadBody_1(Il2CppArray<uintptr_t>* bytes, int32_t headerOffset, Il2CppArray<uintptr_t>* rowList, Il2CppArray<uintptr_t>* columnList) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45F3958))(0, bytes, headerOffset, rowList, columnList);
	}
	template <typename T = uintptr_t> static T ReadRow(Il2CppArray<uintptr_t>* bytes, uintptr_t rowPosition, Il2CppArray<uintptr_t>* columnList) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3348E94))(0, bytes, rowPosition, columnList);
	}
	template <typename T = void> static T ReadRawCheck_Editor(int32_t rowPosition, int32_t headerOffset, Il2CppArray<uintptr_t>* rowList, int32_t rowIndex) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x46397C0))(0, rowPosition, headerOffset, rowList, rowIndex);
	}
	template <typename T = uintptr_t> static T ReadObject(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t dataTypeCode) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4630060))(0, bytes, position, dataTypeCode);
	}
	template <typename T = uintptr_t> static T ReadKey(Il2CppArray<uintptr_t>* bytes, int32_t offset, uintptr_t dataTypeCode) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x4639914))(0, bytes, offset, dataTypeCode);
	}

};

}
