#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class KeyPairPersistence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.Cryptography", "KeyPairPersistence"));
	}

	template <typename T = bool> static T& _userPathExists() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _userPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& _machinePathExists() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& _machinePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> T& _params() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _keyvalue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _filename() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _container() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& lockobj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T get_Filename() {
		return ((T (*)(KeyPairPersistence*))(Il2CppBase() + 0x3FA7600))(this);
	}
	template <typename T = Il2CppString*> T get_KeyValue() {
		return ((T (*)(KeyPairPersistence*))(Il2CppBase() + 0x3FA8928))(this);
	}
	template <typename T = void> T set_KeyValue(Il2CppString* value) {
		return ((T (*)(KeyPairPersistence*, Il2CppString*))(Il2CppBase() + 0x3FA8930))(this, value);
	}
	template <typename T = bool> T Load() {
		return ((T (*)(KeyPairPersistence*))(Il2CppBase() + 0x3FA8954))(this);
	}
	template <typename T = void> T Save() {
		return ((T (*)(KeyPairPersistence*))(Il2CppBase() + 0x3FA8CE8))(this);
	}
	template <typename T = void> T Remove() {
		return ((T (*)(KeyPairPersistence*))(Il2CppBase() + 0x3FA93F8))(this);
	}
	template <typename T = Il2CppString*> static T get_UserPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FA826C))(0);
	}
	template <typename T = Il2CppString*> static T get_MachinePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FA7BB0))(0);
	}
	template <typename T = bool> static T _CanSecure(Il2CppString* root) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FA9604))(0, root);
	}
	template <typename T = bool> static T _ProtectUser(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FA960C))(0, path);
	}
	template <typename T = bool> static T _ProtectMachine(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FA9614))(0, path);
	}
	template <typename T = bool> static T _IsUserProtected(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FA961C))(0, path);
	}
	template <typename T = bool> static T _IsMachineProtected(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FA9624))(0, path);
	}
	template <typename T = bool> static T CanSecure(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FA962C))(0, path);
	}
	template <typename T = bool> static T ProtectUser(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FA9310))(0, path);
	}
	template <typename T = bool> static T ProtectMachine(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FA9228))(0, path);
	}
	template <typename T = bool> static T IsUserProtected(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FA9434))(0, path);
	}
	template <typename T = bool> static T IsMachineProtected(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FA951C))(0, path);
	}
	template <typename T = bool> T get_CanChange() {
		return ((T (*)(KeyPairPersistence*))(Il2CppBase() + 0x3FA8940))(this);
	}
	template <typename T = bool> T get_UseDefaultKeyContainer() {
		return ((T (*)(KeyPairPersistence*))(Il2CppBase() + 0x3FA975C))(this);
	}
	template <typename T = bool> T get_UseMachineKeyStore() {
		return ((T (*)(KeyPairPersistence*))(Il2CppBase() + 0x3FA7B80))(this);
	}
	template <typename T = Il2CppString*> T get_ContainerName() {
		return ((T (*)(KeyPairPersistence*))(Il2CppBase() + 0x3FA798C))(this);
	}
	template <typename T = uintptr_t> T Copy(uintptr_t p) {
		return ((T (*)(KeyPairPersistence*, uintptr_t))(Il2CppBase() + 0x3FA744C))(this, p);
	}
	template <typename T = void> T FromXml(Il2CppString* xml) {
		return ((T (*)(KeyPairPersistence*, Il2CppString*))(Il2CppBase() + 0x3FA8B10))(this, xml);
	}
	template <typename T = Il2CppString*> T ToXml() {
		return ((T (*)(KeyPairPersistence*))(Il2CppBase() + 0x3FA8F94))(this);
	}

};

}
