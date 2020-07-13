#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FEquipUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FEquipUpdate"));
	}


	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* refOPMesh) {
		return ((T (*)(FEquipUpdate*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35FB3B0))(this, refOPMesh);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* refOPMesh, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FEquipUpdate*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35FEB50))(this, refOPMesh, callback, object);
	}
	template <typename T = void> T EndInvoke(Il2CppArray<uintptr_t>* refOPMesh, uintptr_t result) {
		return ((T (*)(FEquipUpdate*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35FEB80))(this, refOPMesh, result);
	}

};

}
