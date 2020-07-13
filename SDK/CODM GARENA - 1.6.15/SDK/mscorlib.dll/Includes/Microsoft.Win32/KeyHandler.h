#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Microsoft.Win32 {

class KeyHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Microsoft.Win32", "KeyHandler"));
	}

	template <typename T = uintptr_t> static T& key_to_handler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& dir_to_handler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> T& Dir() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& values() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& file() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& dirty() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Load() {
		return ((T (*)(KeyHandler*))(Il2CppBase() + 0x3F7E5AC))(this);
	}
	template <typename T = void> T LoadKey(uintptr_t se) {
		return ((T (*)(KeyHandler*, uintptr_t))(Il2CppBase() + 0x3F7F008))(this, se);
	}
	template <typename T = uintptr_t> T Ensure(uintptr_t rkey, Il2CppString* extra, bool writable) {
		return ((T (*)(KeyHandler*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x3F7FD80))(this, rkey, extra, writable);
	}
	template <typename T = uintptr_t> T Probe(uintptr_t rkey, Il2CppString* extra, bool writable) {
		return ((T (*)(KeyHandler*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x3F80234))(this, rkey, extra, writable);
	}
	template <typename T = Il2CppString*> static T CombineName(uintptr_t rkey, Il2CppString* extra) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3F800DC))(0, rkey, extra);
	}
	template <typename T = uintptr_t> static T Lookup(uintptr_t rkey, bool createNonExisting) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3F8067C))(0, rkey, createNonExisting);
	}
	template <typename T = void> static T Drop(uintptr_t rkey) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F80F18))(0, rkey);
	}
	template <typename T = uintptr_t> T GetValue(Il2CppString* name, uintptr_t options) {
		return ((T (*)(KeyHandler*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3F814C8))(this, name, options);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(KeyHandler*))(Il2CppBase() + 0x3F8171C))(this);
	}
	template <typename T = bool> T ValueExists(Il2CppString* name) {
		return ((T (*)(KeyHandler*, Il2CppString*))(Il2CppBase() + 0x3F82648))(this, name);
	}
	template <typename T = bool> T get_IsMarkedForDeletion() {
		return ((T (*)(KeyHandler*))(Il2CppBase() + 0x3F8163C))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(KeyHandler*))(Il2CppBase() + 0x3F82734))(this);
	}
	template <typename T = void> T Save() {
		return ((T (*)(KeyHandler*))(Il2CppBase() + 0x3F81858))(this);
	}
	template <typename T = Il2CppString*> static T get_UserStore() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F80CDC))(0);
	}
	template <typename T = Il2CppString*> static T get_MachineStore() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F80DB0))(0);
	}

};

}
