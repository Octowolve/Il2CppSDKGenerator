#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Policy {

class Evidence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Policy", "Evidence"));
	}

	template <typename T = bool> T& _locked() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& hostEvidenceList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& assemblyEvidenceList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _hashCode() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(Evidence*))(Il2CppBase() + 0x4280734))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(Evidence*))(Il2CppBase() + 0x428078C))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(Evidence*))(Il2CppBase() + 0x4280794))(this);
	}
	template <typename T = uintptr_t> T get_HostEvidenceList() {
		return ((T (*)(Evidence*))(Il2CppBase() + 0x4280798))(this);
	}
	template <typename T = uintptr_t> T get_AssemblyEvidenceList() {
		return ((T (*)(Evidence*))(Il2CppBase() + 0x4280864))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(Evidence*, uintptr_t, int32_t))(Il2CppBase() + 0x4280930))(this, array, index);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Evidence*, uintptr_t))(Il2CppBase() + 0x42809F0))(this, obj);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(Evidence*))(Il2CppBase() + 0x4280CDC))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Evidence*))(Il2CppBase() + 0x4280DEC))(this);
	}

};

}
