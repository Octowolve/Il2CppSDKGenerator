#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUGeneratedOutput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_GeneratedOutput"));
	}

	template <typename T = uintptr_t> T& _outputData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _childOutputs() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> static T ResetMaterialOverrides(uintptr_t output) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C7294C))(0, output);
	}
	template <typename T = void> static T ResetMaterialOverrides_1(uintptr_t outputData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C72B94))(0, outputData);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetGeneratedMaterialsForGameObject(uintptr_t output, uintptr_t inGameObject) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C72CA0))(0, output, inGameObject);
	}
	template <typename T = bool> static T HasLODGroup(uintptr_t output) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C72AE8))(0, output);
	}
	template <typename T = bool> static T IsOutputUsingMaterial(uintptr_t checkMaterial, uintptr_t output) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C72F38))(0, checkMaterial, output);
	}
	template <typename T = bool> static T IsOutputDataUsingMaterial(uintptr_t checkMaterial, uintptr_t outputData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C730F0))(0, checkMaterial, outputData);
	}
	template <typename T = void> static T ClearGeneratedMaterialReferences(uintptr_t generatedOutputData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C7337C))(0, generatedOutputData);
	}
	template <typename T = void> static T DestroyGeneratedOutput(uintptr_t generatedOutput) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C733A0))(0, generatedOutput);
	}
	template <typename T = void> static T DestroyGeneratedOutputChildren(uintptr_t generatedOutput) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C735F0))(0, generatedOutput);
	}
	template <typename T = void> static T DestroyGeneratedOutputData(uintptr_t generatedOutputData, bool bDontDeletePersistantResources) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4C7382C))(0, generatedOutputData, bDontDeletePersistantResources);
	}
	template <typename T = void> static T ClearMaterialsNoLongerUsed(Il2CppArray<uintptr_t>* materialsToCheck, Il2CppArray<uintptr_t>* materialsInUse) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C73870))(0, materialsToCheck, materialsInUse);
	}
	template <typename T = void> static T CopyMaterialOverrides(uintptr_t sourceOutputData, uintptr_t destOutputData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C739F4))(0, sourceOutputData, destOutputData);
	}

};

}
