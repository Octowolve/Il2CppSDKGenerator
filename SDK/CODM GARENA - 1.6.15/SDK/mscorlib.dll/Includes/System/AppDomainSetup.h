#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class AppDomainSetup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "AppDomainSetup"));
	}

	template <typename T = Il2CppString*> T& application_base() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& application_name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& cache_path() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& configuration_file() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& dynamic_base() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& license_file() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& private_bin_path() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& private_bin_path_probe() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& shadow_copy_directories() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& shadow_copy_files() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& publisher_policy() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& path_changed() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> T& loader_optimization() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& disallow_binding_redirects() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& disallow_code_downloads() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> T& _activationArguments() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& domain_initializer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& application_trust() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& domain_initializer_args() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& application_trust_xml() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& disallow_appbase_probe() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& configuration_bytes() {
		return *(T*)((uintptr_t)this + 0x54);
	}


};

}
