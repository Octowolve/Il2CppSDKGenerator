#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigBinaryWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigBinaryWriter"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix6_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix7_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix8_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix9_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix10_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Write(Il2CppString* value) {
		return ((T (*)(ConfigBinaryWriter*, Il2CppString*))(Il2CppBase() + 0x463105C))(this, value);
	}
	template <typename T = void> T Write_1(Il2CppArray<uintptr_t>* itemArray) {
		return ((T (*)(ConfigBinaryWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x463123C))(this, itemArray);
	}
	template <typename T = void> T Write_2(Il2CppArray<uintptr_t>* itemArray) {
		return ((T (*)(ConfigBinaryWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4631368))(this, itemArray);
	}
	template <typename T = void> T Write_3(Il2CppArray<uintptr_t>* itemArray) {
		return ((T (*)(ConfigBinaryWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4631494))(this, itemArray);
	}
	template <typename T = void> T Write_4(Il2CppArray<uintptr_t>* itemArray) {
		return ((T (*)(ConfigBinaryWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46315C0))(this, itemArray);
	}
	template <typename T = void> T Write_5(Il2CppList<int32_t>* itemList) {
		return ((T (*)(ConfigBinaryWriter*, Il2CppList<int32_t>*))(Il2CppBase() + 0x46316EC))(this, itemList);
	}
	template <typename T = void> T Write_6(Il2CppList<bool>* itemList) {
		return ((T (*)(ConfigBinaryWriter*, Il2CppList<bool>*))(Il2CppBase() + 0x4631904))(this, itemList);
	}
	template <typename T = void> T Write_7(Il2CppList<Il2CppString*>* itemList) {
		return ((T (*)(ConfigBinaryWriter*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x4631B1C))(this, itemList);
	}
	template <typename T = void> T Write_8(Il2CppVector2 vector2) {
		return ((T (*)(ConfigBinaryWriter*, Il2CppVector2))(Il2CppBase() + 0x4631D2C))(this, vector2);
	}
	template <typename T = void> T Write_9(Il2CppVector3 vector3) {
		return ((T (*)(ConfigBinaryWriter*, Il2CppVector3))(Il2CppBase() + 0x4631E18))(this, vector3);
	}
	template <typename T = void> T Write_10(uintptr_t vector4) {
		return ((T (*)(ConfigBinaryWriter*, uintptr_t))(Il2CppBase() + 0x4631F24))(this, vector4);
	}
	template <typename T = void> T xLuaBaseProxy_Write(Il2CppString* P0) {
		return ((T (*)(ConfigBinaryWriter*, Il2CppString*))(Il2CppBase() + 0x4632050))(this, P0);
	}

};

}
