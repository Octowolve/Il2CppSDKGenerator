#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_Parameters"));
	}

	template <typename T = int32_t> T& _nodeID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _uiLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _paramInts() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _paramFloats() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _paramStrings() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _paramChoices() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<int32_t>*> T& _rootParameters() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _parameterList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _parameterModifiers() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& _regenerateParameters() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _presetData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _defaultPresetData() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _validParameters() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& _showParameters() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& _recacheUI() {
		return *(T*)((uintptr_t)this + 0x3E);
	}

	template <typename T = bool> T get_RequiresRegeneration() {
		return ((T (*)(HEUParameters*))(Il2CppBase() + 0x2BB8400))(this);
	}
	template <typename T = void> T set_RequiresRegeneration(bool value) {
		return ((T (*)(HEUParameters*, bool))(Il2CppBase() + 0x2BE48A0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPresetData() {
		return ((T (*)(HEUParameters*))(Il2CppBase() + 0x2BCEE44))(this);
	}
	template <typename T = void> T SetPresetData(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(HEUParameters*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2BCEE4C))(this, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDefaultPresetData() {
		return ((T (*)(HEUParameters*))(Il2CppBase() + 0x2BE48A8))(this);
	}
	template <typename T = bool> T AreParametersValid() {
		return ((T (*)(HEUParameters*))(Il2CppBase() + 0x2BE48B0))(this);
	}
	template <typename T = bool> T get_RecacheUI() {
		return ((T (*)(HEUParameters*))(Il2CppBase() + 0x2BE48B8))(this);
	}
	template <typename T = void> T set_RecacheUI(bool value) {
		return ((T (*)(HEUParameters*, bool))(Il2CppBase() + 0x2BE48C0))(this, value);
	}
	template <typename T = void> T CleanUp() {
		return ((T (*)(HEUParameters*))(Il2CppBase() + 0x2BBD2E0))(this);
	}
	template <typename T = bool> T Initialize(uintptr_t session, int32_t nodeID, uintptr_t nodeInfo, Il2CppDictionary<Il2CppString*, uintptr_t>* previousParamFolders, Il2CppDictionary<Il2CppString*, uintptr_t>* previousParamInputNodes, uintptr_t parentAsset) {
		return ((T (*)(HEUParameters*, uintptr_t, int32_t, uintptr_t, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2BBDC1C))(this, session, nodeID, nodeInfo, previousParamFolders, previousParamInputNodes, parentAsset);
	}
	template <typename T = void> T SetupRampParameter(uintptr_t rampParameter) {
		return ((T (*)(HEUParameters*, uintptr_t))(Il2CppBase() + 0x2BE48D0))(this, rampParameter);
	}
	template <typename T = uintptr_t> T GetParameter(int32_t listIndex) {
		return ((T (*)(HEUParameters*, int32_t))(Il2CppBase() + 0x2BADF40))(this, listIndex);
	}
	template <typename T = uintptr_t> T GetParameter_1(Il2CppString* name) {
		return ((T (*)(HEUParameters*, Il2CppString*))(Il2CppBase() + 0x2BDA86C))(this, name);
	}
	template <typename T = uintptr_t> T GetParameterWithParmID(int32_t parmID) {
		return ((T (*)(HEUParameters*, int32_t))(Il2CppBase() + 0x2BADCC4))(this, parmID);
	}
	template <typename T = void> T RemoveParameter(int32_t listIndex) {
		return ((T (*)(HEUParameters*, int32_t))(Il2CppBase() + 0x2BE4DF8))(this, listIndex);
	}
	template <typename T = int32_t> T GetChosenIndexFromChoiceList(uintptr_t inChoiceParameter) {
		return ((T (*)(HEUParameters*, uintptr_t))(Il2CppBase() + 0x2BE4ED8))(this, inChoiceParameter);
	}
	template <typename T = Il2CppString*> T GetStringFromParameter(Il2CppString* paramName) {
		return ((T (*)(HEUParameters*, Il2CppString*))(Il2CppBase() + 0x2BE5040))(this, paramName);
	}
	template <typename T = void> T SetStringToParameter(Il2CppString* paramName, Il2CppString* value) {
		return ((T (*)(HEUParameters*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2BE50A0))(this, paramName, value);
	}
	template <typename T = bool> T HaveParametersChanged() {
		return ((T (*)(HEUParameters*))(Il2CppBase() + 0x2BBC2A8))(this);
	}
	template <typename T = bool> T UploadValuesToHoudini(uintptr_t session, uintptr_t parentAsset, bool bDoCheck) {
		return ((T (*)(HEUParameters*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2BB8DC0))(this, session, parentAsset, bDoCheck);
	}
	template <typename T = void> T InsertInstanceToMultiParm(int32_t unityParamIndex, int32_t instanceIndex, int32_t numInstancesToAdd) {
		return ((T (*)(HEUParameters*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2BE5124))(this, unityParamIndex, instanceIndex, numInstancesToAdd);
	}
	template <typename T = void> T RemoveInstancesFromMultiParm(int32_t unityParamIndex, int32_t instanceIndex, int32_t numInstancesToRemove) {
		return ((T (*)(HEUParameters*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2BE51EC))(this, unityParamIndex, instanceIndex, numInstancesToRemove);
	}
	template <typename T = void> T ClearInstancesFromMultiParm(int32_t unityParamIndex) {
		return ((T (*)(HEUParameters*, int32_t))(Il2CppBase() + 0x2BE52B4))(this, unityParamIndex);
	}
	template <typename T = bool> T HasModifiersPending() {
		return ((T (*)(HEUParameters*))(Il2CppBase() + 0x2BB8408))(this);
	}
	template <typename T = void> T ProcessModifiers(uintptr_t session) {
		return ((T (*)(HEUParameters*, uintptr_t))(Il2CppBase() + 0x2BB84B0))(this, session);
	}
	template <typename T = void> T GetParameterDataForUIRestore(Il2CppDictionary<Il2CppString*, uintptr_t>* folderParams, Il2CppDictionary<Il2CppString*, uintptr_t>* inputNodeParams) {
		return ((T (*)(HEUParameters*, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x2BBD9F0))(this, folderParams, inputNodeParams);
	}
	template <typename T = void> T GetInputNodeConnectionObjects(Il2CppList<uintptr_t>* inputNodeObjects) {
		return ((T (*)(HEUParameters*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BC69C8))(this, inputNodeObjects);
	}
	template <typename T = void> T DownloadPresetData(uintptr_t session) {
		return ((T (*)(HEUParameters*, uintptr_t))(Il2CppBase() + 0x2BC040C))(this, session);
	}
	template <typename T = void> T UploadPresetData(uintptr_t session) {
		return ((T (*)(HEUParameters*, uintptr_t))(Il2CppBase() + 0x2BC046C))(this, session);
	}
	template <typename T = void> T DownloadAsDefaultPresetData(uintptr_t session) {
		return ((T (*)(HEUParameters*, uintptr_t))(Il2CppBase() + 0x2BB5E2C))(this, session);
	}
	template <typename T = void> T UploadParameterInputs(uintptr_t session, uintptr_t parentAsset, bool bForceUpdate) {
		return ((T (*)(HEUParameters*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2BC04D0))(this, session, parentAsset, bForceUpdate);
	}
	template <typename T = void> T UpdateTransformParameters(uintptr_t session, uintptr_t HAPITransform) {
		return ((T (*)(HEUParameters*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BE5378))(this, session, HAPITransform);
	}
	template <typename T = void> T SyncParameterFromHoudini(uintptr_t session, Il2CppString* parameterName) {
		return ((T (*)(HEUParameters*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2BE543C))(this, session, parameterName);
	}
	template <typename T = void> T SyncInternalParametersForUndoCompare(uintptr_t session) {
		return ((T (*)(HEUParameters*, uintptr_t))(Il2CppBase() + 0x2BD02FC))(this, session);
	}
	template <typename T = void> T ResetAllToDefault(uintptr_t session) {
		return ((T (*)(HEUParameters*, uintptr_t))(Il2CppBase() + 0x2BCF4C4))(this, session);
	}

};

}
