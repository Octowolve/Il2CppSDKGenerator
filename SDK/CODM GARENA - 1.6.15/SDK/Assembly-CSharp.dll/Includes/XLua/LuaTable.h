#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class LuaTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "LuaTable"));
	}


	template <typename T = void> T Get(uintptr_t key, uintptr_t* value) {
		return ((T (*)(LuaTable*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2842038))(this, key, value);
	}
	template <typename T = bool> T ContainsKey(uintptr_t key) {
		return ((T (*)(LuaTable*, uintptr_t))(Il2CppBase() + 0x45F1858))(this, key);
	}
	template <typename T = void> T Set(uintptr_t key, uintptr_t value) {
		return ((T (*)(LuaTable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2842718))(this, key, value);
	}
	template <typename T = uintptr_t> T GetInPath(Il2CppString* path) {
		return ((T (*)(LuaTable*, Il2CppString*))(Il2CppBase() + 0x4E416B4))(this, path);
	}
	template <typename T = void> T SetInPath(Il2CppString* path, uintptr_t val) {
		return ((T (*)(LuaTable*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x28428D8))(this, path, val);
	}
	template <typename T = uintptr_t> T get_Item(Il2CppString* field) {
		return ((T (*)(LuaTable*, Il2CppString*))(Il2CppBase() + 0xF4701C))(this, field);
	}
	template <typename T = void> T set_Item(Il2CppString* field, uintptr_t value) {
		return ((T (*)(LuaTable*, Il2CppString*, uintptr_t))(Il2CppBase() + 0xF470A8))(this, field, value);
	}
	template <typename T = uintptr_t> T get_Item_1(uintptr_t field) {
		return ((T (*)(LuaTable*, uintptr_t))(Il2CppBase() + 0xF4713C))(this, field);
	}
	template <typename T = void> T set_Item_1(uintptr_t field, uintptr_t value) {
		return ((T (*)(LuaTable*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF471C8))(this, field, value);
	}
	template <typename T = void> T ForEach(void* action) {
		return ((T (*)(LuaTable*, void*))(Il2CppBase() + 0x28416B0))(this, action);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(LuaTable*))(Il2CppBase() + 0xF4725C))(this);
	}
	template <typename T = uintptr_t> T GetKeys() {
		return ((T (*)(LuaTable*))(Il2CppBase() + 0xF47360))(this);
	}
	template <typename T = void*> T GetKeys_1() {
		return ((T (*)(LuaTable*))(Il2CppBase() + 0x45F56EC))(this);
	}
	template <typename T = uintptr_t> T Get_1(uintptr_t key) {
		return ((T (*)(LuaTable*, uintptr_t))(Il2CppBase() + 0x4E4166C))(this, key);
	}
	template <typename T = uintptr_t> T Get_2(uintptr_t key) {
		return ((T (*)(LuaTable*, uintptr_t))(Il2CppBase() + 0x4E5642C))(this, key);
	}
	template <typename T = uintptr_t> T Get_3(Il2CppString* key) {
		return ((T (*)(LuaTable*, Il2CppString*))(Il2CppBase() + 0x4E56474))(this, key);
	}
	template <typename T = void> T SetMetaTable(uintptr_t metaTable) {
		return ((T (*)(LuaTable*, uintptr_t))(Il2CppBase() + 0xF47414))(this, metaTable);
	}
	template <typename T = uintptr_t> T Cast() {
		return ((T (*)(LuaTable*))(Il2CppBase() + 0x4E4146C))(this);
	}
	template <typename T = void> T push(uintptr_t L) {
		return ((T (*)(LuaTable*, uintptr_t))(Il2CppBase() + 0xF47570))(this, L);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LuaTable*))(Il2CppBase() + 0xF475A8))(this);
	}

};

}
