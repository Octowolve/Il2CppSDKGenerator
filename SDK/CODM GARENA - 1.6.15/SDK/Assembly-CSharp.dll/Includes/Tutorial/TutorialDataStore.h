#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialDataStore"));
	}

	template <typename T = bool> T& m_CompleteFirstMatch() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bStartFirstPVP() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> static T& m_RequestPrize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsStepDataInitialized() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = uintptr_t> T& m_StepData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bShopDataAvailable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& PrologueMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& TutorialLevelMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& TutorialSettingsMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitStepData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStepFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkStepFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkStepCleared() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_MarkStepCleared() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_MarkStepFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStepDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAllTutorialsFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogTutorialStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogAllTutorialSteps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPrologueMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsPrologueMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> static T set_requestPrize(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x42368E8))(0, value);
	}
	template <typename T = bool> static T get_requestPrize() {
		return ((T (*)(void *))(Il2CppBase() + 0x423699C))(0);
	}
	template <typename T = bool> T get_CompleteFirstMatch() {
		return ((T (*)(TutorialDataStore*))(Il2CppBase() + 0x4236A4C))(this);
	}
	template <typename T = void> T set_CompleteFirstMatch(bool value) {
		return ((T (*)(TutorialDataStore*, bool))(Il2CppBase() + 0x4236A54))(this, value);
	}
	template <typename T = uintptr_t> T get_StepData() {
		return ((T (*)(TutorialDataStore*))(Il2CppBase() + 0x4236A5C))(this);
	}
	template <typename T = void> T InitStepData(Il2CppList<int32_t>* inStepData) {
		return ((T (*)(TutorialDataStore*, Il2CppList<int32_t>*))(Il2CppBase() + 0x4236A64))(this, inStepData);
	}
	template <typename T = bool> T IsStepFinished(int32_t stepIndex) {
		return ((T (*)(TutorialDataStore*, int32_t))(Il2CppBase() + 0x42373A8))(this, stepIndex);
	}
	template <typename T = void> T MarkStepFinished(int32_t stepIndex) {
		return ((T (*)(TutorialDataStore*, int32_t))(Il2CppBase() + 0x42375D0))(this, stepIndex);
	}
	template <typename T = void> T MarkStepCleared(int32_t stepIndex) {
		return ((T (*)(TutorialDataStore*, int32_t))(Il2CppBase() + 0x42378DC))(this, stepIndex);
	}
	template <typename T = void> T MarkStepCleared_1(int32_t startIndex, int32_t endIndex) {
		return ((T (*)(TutorialDataStore*, int32_t, int32_t))(Il2CppBase() + 0x4237B38))(this, startIndex, endIndex);
	}
	template <typename T = void> T MarkStepFinished_1(int32_t startIndex, int32_t endIndex) {
		return ((T (*)(TutorialDataStore*, int32_t, int32_t))(Il2CppBase() + 0x4237C54))(this, startIndex, endIndex);
	}
	template <typename T = Il2CppList<int32_t>*> T GetStepDataList() {
		return ((T (*)(TutorialDataStore*))(Il2CppBase() + 0x4237D70))(this);
	}
	template <typename T = bool> T CheckAllTutorialsFinished() {
		return ((T (*)(TutorialDataStore*))(Il2CppBase() + 0x4237F90))(this);
	}
	template <typename T = void> T LogTutorialStep(int32_t index) {
		return ((T (*)(TutorialDataStore*, int32_t))(Il2CppBase() + 0x423780C))(this, index);
	}
	template <typename T = void> T LogAllTutorialSteps() {
		return ((T (*)(TutorialDataStore*))(Il2CppBase() + 0x4236FC0))(this);
	}
	template <typename T = bool> static T IsPrologueMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x42384CC))(0);
	}
	template <typename T = bool> static T IsPrologueMap_1(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4238638))(0, mapID);
	}

};

}
