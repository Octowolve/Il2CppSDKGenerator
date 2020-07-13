#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUInputNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_InputNode"));
	}

	template <typename T = uintptr_t> T& _inputNodeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _inputObjectType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _pendingInputObjectType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _inputObjects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<int32_t>*> T& _inputObjectsConnectedAssetIDs() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _inputAsset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _connectedInputAsset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _nodeID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _inputIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& _requiresCook() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _requiresUpload() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = Il2CppString*> T& _inputName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& _paramName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _connectedNodeID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& _keepWorldTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _packGeometryBeforeMerging() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = uintptr_t> T& _parentAsset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _uiCache() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get_InputType() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BBC87C))(this);
	}
	template <typename T = uintptr_t> T get_PendingInputObjectType() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BD8A34))(this);
	}
	template <typename T = void> T set_PendingInputObjectType(uintptr_t value) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BD8A3C))(this, value);
	}
	template <typename T = bool> T get_RequiresCook() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BAA720))(this);
	}
	template <typename T = void> T set_RequiresCook(bool value) {
		return ((T (*)(HEUInputNode*, bool))(Il2CppBase() + 0x2BC10DC))(this, value);
	}
	template <typename T = bool> T get_RequiresUpload() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BBC884))(this);
	}
	template <typename T = void> T set_RequiresUpload(bool value) {
		return ((T (*)(HEUInputNode*, bool))(Il2CppBase() + 0x2BCF0E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_InputName() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BCBC48))(this);
	}
	template <typename T = Il2CppString*> T get_ParamName() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BD8A44))(this);
	}
	template <typename T = void> T set_ParamName(Il2CppString* value) {
		return ((T (*)(HEUInputNode*, Il2CppString*))(Il2CppBase() + 0x2BD8A4C))(this, value);
	}
	template <typename T = bool> T get_KeepWorldTransform() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BD8A54))(this);
	}
	template <typename T = void> T set_KeepWorldTransform(bool value) {
		return ((T (*)(HEUInputNode*, bool))(Il2CppBase() + 0x2BD8A5C))(this, value);
	}
	template <typename T = bool> T get_PackGeometryBeforeMerging() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BD8A64))(this);
	}
	template <typename T = void> T set_PackGeometryBeforeMerging(bool value) {
		return ((T (*)(HEUInputNode*, bool))(Il2CppBase() + 0x2BD8A6C))(this, value);
	}
	template <typename T = uintptr_t> T get_ParentAsset() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BD8A74))(this);
	}
	template <typename T = uintptr_t> static T CreateSetupInput(int32_t nodeID, int32_t inputIndex, Il2CppString* inputName, uintptr_t inputNodeType, uintptr_t parentAsset) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BA794C))(0, nodeID, inputIndex, inputName, inputNodeType, parentAsset);
	}
	template <typename T = void> T DestroyAllData(uintptr_t session) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BA5838))(this, session);
	}
	template <typename T = void> T ResetInputObjectTransforms() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BD8D38))(this);
	}
	template <typename T = void> T ResetInputNode(uintptr_t session) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BD8E90))(this, session);
	}
	template <typename T = uintptr_t> T CreateInputObjectInfo(uintptr_t inputGameObject) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BD8FA4))(this, inputGameObject);
	}
	template <typename T = uintptr_t> T CreateInputTerrainInfo(uintptr_t inputTerrain) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BD9118))(this, inputTerrain);
	}
	template <typename T = void> T InsertInputObject(int32_t index, uintptr_t newInputGameObject) {
		return ((T (*)(HEUInputNode*, int32_t, uintptr_t))(Il2CppBase() + 0x2BD91B8))(this, index, newInputGameObject);
	}
	template <typename T = uintptr_t> T GetInputObject(int32_t index) {
		return ((T (*)(HEUInputNode*, int32_t))(Il2CppBase() + 0x2BD9438))(this, index);
	}
	template <typename T = void> T AddInputObjectAtEnd(uintptr_t newInputGameObject) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BD96AC))(this, newInputGameObject);
	}
	template <typename T = void> T RemoveInputObject(int32_t index) {
		return ((T (*)(HEUInputNode*, int32_t))(Il2CppBase() + 0x2BD9758))(this, index);
	}
	template <typename T = void> T RemoveAllInputObjects() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BD8EDC))(this);
	}
	template <typename T = int32_t> T NumInputObjects() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BD99C4))(this);
	}
	template <typename T = void> T ChangeInputType(uintptr_t session, uintptr_t newType) {
		return ((T (*)(HEUInputNode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BD8F74))(this, session, newType);
	}
	template <typename T = void> T ResetConnectionForForceUpdate(uintptr_t session) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BC07AC))(this, session);
	}
	template <typename T = void> T UploadInput(uintptr_t session) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BC07EC))(this, session);
	}
	template <typename T = bool> T IsInputAssetConnected() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BD9A5C))(this);
	}
	template <typename T = void> T ConnectInputAssetActor(uintptr_t session) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BDA528))(this, session);
	}
	template <typename T = void> T DisconnectInputAssetActor(uintptr_t session) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BD9B0C))(this, session);
	}
	template <typename T = void> T ConnectInputNode(uintptr_t session) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BD9F38))(this, session);
	}
	template <typename T = void> T DisconnectAndDestroyInputAssets(uintptr_t session) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BD8A88))(this, session);
	}
	template <typename T = bool> T UploadObjectMergeTransformType(uintptr_t session) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BDA1A8))(this, session);
	}
	template <typename T = bool> T UploadObjectMergePackGeometry(uintptr_t session) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BDA368))(this, session);
	}
	template <typename T = bool> T HasInputNodeTransformChanged() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BBC88C))(this);
	}
	template <typename T = bool> T UploadInputObjectTransforms(uintptr_t session) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BDAA60))(this, session);
	}
	template <typename T = void> T CookUpstreamConnectedAsset(uintptr_t session) {
		return ((T (*)(HEUInputNode*, uintptr_t))(Il2CppBase() + 0x2BC69CC))(this, session);
	}
	template <typename T = void> T CopyInputValuesTo(uintptr_t session, uintptr_t destInputNode) {
		return ((T (*)(HEUInputNode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BCEE54))(this, session, destInputNode);
	}
	template <typename T = void> T ClearUICache() {
		return ((T (*)(HEUInputNode*))(Il2CppBase() + 0x2BD8A7C))(this);
	}

};

}
