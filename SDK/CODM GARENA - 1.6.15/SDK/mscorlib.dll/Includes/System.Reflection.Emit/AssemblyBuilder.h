#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class AssemblyBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "AssemblyBuilder"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& modules() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& dir() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& resources() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& version() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& culture() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& flags() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& pekind() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& access() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& loaded_modules() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& corlib_internal() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pktoken() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& corlib_object_type() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& corlib_value_type() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& corlib_enum_type() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& corlib_void_type() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& created() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& is_module_only() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = uintptr_t> T& sn() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& is_compiler_context() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& versioninfo_culture() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = void> static T basic_init(uintptr_t ab) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4566F88))(0, ab);
	}
	template <typename T = Il2CppString*> T get_Location() {
		return ((T (*)(AssemblyBuilder*))(Il2CppBase() + 0x4566F90))(this);
	}
	template <typename T = uintptr_t> T DefineDynamicModule(Il2CppString* name, bool emitSymbolInfo) {
		return ((T (*)(AssemblyBuilder*, Il2CppString*, bool))(Il2CppBase() + 0x456705C))(this, name, emitSymbolInfo);
	}
	template <typename T = uintptr_t> T DefineDynamicModule_1(Il2CppString* name, Il2CppString* fileName, bool emitSymbolInfo, bool transient) {
		return ((T (*)(AssemblyBuilder*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x4567084))(this, name, fileName, emitSymbolInfo, transient);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetModulesInternal() {
		return ((T (*)(AssemblyBuilder*))(Il2CppBase() + 0x4568238))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTypes(bool exportedOnly) {
		return ((T (*)(AssemblyBuilder*, bool))(Il2CppBase() + 0x45682FC))(this, exportedOnly);
	}
	template <typename T = bool> T get_IsCompilerContext() {
		return ((T (*)(AssemblyBuilder*))(Il2CppBase() + 0x4566760))(this);
	}
	template <typename T = bool> T get_IsSave() {
		return ((T (*)(AssemblyBuilder*))(Il2CppBase() + 0x4566F74))(this);
	}
	template <typename T = bool> T get_IsRun() {
		return ((T (*)(AssemblyBuilder*))(Il2CppBase() + 0x45685EC))(this);
	}
	template <typename T = Il2CppString*> T get_AssemblyDir() {
		return ((T (*)(AssemblyBuilder*))(Il2CppBase() + 0x4568600))(this);
	}
	template <typename T = uintptr_t> T not_supported() {
		return ((T (*)(AssemblyBuilder*))(Il2CppBase() + 0x4566FA8))(this);
	}
	template <typename T = void> T check_name_and_filename(Il2CppString* name, Il2CppString* fileName, bool fileNeedsToExists) {
		return ((T (*)(AssemblyBuilder*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x45674B4))(this, name, fileName, fileNeedsToExists);
	}
	template <typename T = uintptr_t> T UnprotectedGetName() {
		return ((T (*)(AssemblyBuilder*))(Il2CppBase() + 0x4568618))(this);
	}

};

}
