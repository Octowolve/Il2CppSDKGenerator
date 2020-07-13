#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class AssemblyName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "AssemblyName"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& codebase() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& major() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& minor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& build() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& revision() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& cultureinfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& flags() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& hashalg() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& keypair() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& publicKey() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& keyToken() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& versioncompat() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& version() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& processor_architecture() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x45606B8))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(AssemblyName*, Il2CppString*))(Il2CppBase() + 0x45606C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeBase() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x45606C8))(this);
	}
	template <typename T = uintptr_t> T get_CultureInfo() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x45606D0))(this);
	}
	template <typename T = uintptr_t> T get_Flags() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x45606D8))(this);
	}
	template <typename T = Il2CppString*> T get_FullName() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x45606E0))(this);
	}
	template <typename T = uintptr_t> T get_KeyPair() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x4560BA4))(this);
	}
	template <typename T = uintptr_t> T get_Version() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x4560A78))(this);
	}
	template <typename T = void> T set_Version(uintptr_t value) {
		return ((T (*)(AssemblyName*, uintptr_t))(Il2CppBase() + 0x4560BAC))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x4560C40))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPublicKey() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x4560C64))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPublicKeyToken() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x4560C6C))(this);
	}
	template <typename T = bool> T get_IsPublicKeyValid() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x4560D94))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T InternalGetPublicKeyToken() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x4560A80))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ComputePublicKeyToken() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x456101C))(this);
	}
	template <typename T = void> T SetPublicKey(Il2CppArray<uintptr_t>* publicKey) {
		return ((T (*)(AssemblyName*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4561134))(this, publicKey);
	}
	template <typename T = void> T SetPublicKeyToken(Il2CppArray<uintptr_t>* publicKeyToken) {
		return ((T (*)(AssemblyName*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4561150))(this, publicKeyToken);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(AssemblyName*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4561158))(this, info, context);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(AssemblyName*))(Il2CppBase() + 0x456144C))(this);
	}
	template <typename T = void> T OnDeserialization(uintptr_t sender) {
		return ((T (*)(AssemblyName*, uintptr_t))(Il2CppBase() + 0x4561554))(this, sender);
	}
	template <typename T = uintptr_t> static T GetAssemblyName(Il2CppString* assemblyFile) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x456155C))(0, assemblyFile);
	}

};

}
