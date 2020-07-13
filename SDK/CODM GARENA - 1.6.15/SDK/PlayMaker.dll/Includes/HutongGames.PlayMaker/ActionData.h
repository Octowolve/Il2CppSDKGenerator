#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class ActionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "ActionData"));
	}

	template <typename T = Il2CppString*> static T& autoNameString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MUST_BE_LESS_THAN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& ActionTypeLookup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*> static T& ActionFieldsLookup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& ActionHashCodeLookup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& resaveActionData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> static T& UsedIndices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& InitFields() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& actionNames() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& customNames() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<bool>*> T& actionEnabled() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<bool>*> T& actionIsOpen() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& actionStartIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<int32_t>*> T& actionHashCodes() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& unityObjectParams() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmGameObjectParams() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmOwnerDefaultParams() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& animationCurveParams() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& functionCallParams() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmTemplateControlParams() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmEventTargetParams() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmPropertyParams() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& layoutOptionParams() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmStringParams() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmObjectParams() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmVarParams() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmArrayParams() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmEnumParams() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmFloatParams() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmIntParams() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmBoolParams() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmVector2Params() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmVector3Params() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmColorParams() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmRectParams() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fsmQuaternionParams() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& stringParams() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<unsigned char>*> T& byteData() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& byteDataAsArray() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<int32_t>*> T& arrayParamSizes() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& arrayParamTypes() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<int32_t>*> T& customTypeSizes() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& customTypeNames() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& paramDataType() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& paramName() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<int32_t>*> T& paramDataPos() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<int32_t>*> T& paramByteDataSize() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& nextParamIndex() {
		return *(T*)((uintptr_t)this + 0xA4);
	}

	template <typename T = int32_t> T get_ActionCount() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2EC8FA4))(this);
	}
	template <typename T = uintptr_t> T Copy() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2EC903C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T CopyStringParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECA9F0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmFloatParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2EC97C0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmIntParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2EC9A08))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmBoolParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2EC9C50))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmVector2Params() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECA0D4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmVector3Params() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECA324))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmColorParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2EC9E98))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmRectParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECA578))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmQuaternionParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECA7B4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmStringParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECAAA4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmObjectParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECACE0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmGameObjectParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECAF1C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmOwnerDefaultParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECB164))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyAnimationCurveParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECB3A0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFunctionCallParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECB6E8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmTemplateControlParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECB924))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmVarParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECBB60))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmArrayParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECBD9C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmEnumParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECBFD8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmPropertyParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECC214))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyFsmEventTargetParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECC450))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CopyLayoutOptionParams() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECC68C))(this);
	}
	template <typename T = void> T ClearActionData() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2ECD9F0))(this);
	}
	template <typename T = uintptr_t> static T GetActionType(Il2CppString* actionName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2ECDC34))(0, actionName);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetFields(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2ECEC64))(0, actionType);
	}
	template <typename T = int32_t> static T GetActionTypeHashCode(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2ECEE68))(0, actionType);
	}
	template <typename T = int32_t> static T GetStableHash(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2ECF118))(0, s);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T LoadActions(uintptr_t state) {
		return ((T (*)(ActionData*, uintptr_t))(Il2CppBase() + 0x2ECF25C))(this, state);
	}
	template <typename T = uintptr_t> T CreateAction(uintptr_t state, int32_t actionIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED0AB0))(this, state, actionIndex);
	}
	template <typename T = uintptr_t> T CreateAction_1(uintptr_t context, int32_t actionIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ECF6B8))(this, context, actionIndex);
	}
	template <typename T = void> T LoadActionField(uintptr_t fsm, uintptr_t obj, uintptr_t field, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2ED1A1C))(this, fsm, obj, field, paramIndex);
	}
	template <typename T = void> T LoadArrayElement(uintptr_t fsm, uintptr_t field, uintptr_t fieldType, int32_t elementIndex, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x2ED7C28))(this, fsm, field, fieldType, elementIndex, paramIndex);
	}
	template <typename T = void> static T LogError(uintptr_t context, Il2CppString* error) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2ED0D88))(0, context, error);
	}
	template <typename T = void> static T LogInfo(uintptr_t context, Il2CppString* info) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2ED10FC))(0, context, info);
	}
	template <typename T = uintptr_t> T GetFsmFloat(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED3F54))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmInt(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED42B4))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmBool(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED44D8))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmVector2(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED46FC))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmVector3(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED4920))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmColor(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED4F8C))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmRect(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED4B44))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmQuaternion(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED4D68))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmGameObject(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED3988))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmTemplateControl(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED5E28))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmVar(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED6060))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmArray(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED6374))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmEnum(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED61F0))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFunctionCall(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED567C))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmProperty(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED6504))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmEventTarget(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED6DA0))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetLayoutOption(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED70B4))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmOwnerDefault(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED72C0))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmString(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED7458))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmObject(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED51B0))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmMaterial(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED532C))(this, fsm, paramIndex);
	}
	template <typename T = uintptr_t> T GetFsmTexture(uintptr_t fsm, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2ED54D4))(this, fsm, paramIndex);
	}
	template <typename T = bool> T UsesDataVersion2() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x2EDC5AC))(this);
	}
	template <typename T = Il2CppString*> static T TryFixActionName(Il2CppString* actionName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2ED0B7C))(0, actionName);
	}
	template <typename T = uintptr_t> T TryRecoverAction(uintptr_t context, uintptr_t actionType, uintptr_t action, int32_t actionIndex) {
		return ((T (*)(ActionData*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2ED1250))(this, context, actionType, action, actionIndex);
	}
	template <typename T = uintptr_t> T FindField(uintptr_t actionType, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, int32_t))(Il2CppBase() + 0x2EDC8A8))(this, actionType, paramIndex);
	}
	template <typename T = uintptr_t> static T FindField_1(uintptr_t actionType, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2EDCC80))(0, actionType, name);
	}
	template <typename T = bool> T TryConvertParameter(uintptr_t context, uintptr_t action, uintptr_t field, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2EDCE8C))(this, context, action, field, paramIndex);
	}
	template <typename T = bool> T TryConvertArrayElement(uintptr_t fsm, uintptr_t field, uintptr_t originalParamType, uintptr_t currentParamType, int32_t elementIndex, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x2EE0834))(this, fsm, field, originalParamType, currentParamType, elementIndex, paramIndex);
	}
	template <typename T = uintptr_t> T ConvertType(uintptr_t fsm, uintptr_t originalParamType, uintptr_t currentParamType, int32_t paramIndex) {
		return ((T (*)(ActionData*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2EE0A84))(this, fsm, originalParamType, currentParamType, paramIndex);
	}
	template <typename T = void> T SaveActions(uintptr_t state, Il2CppArray<uintptr_t>* actions) {
		return ((T (*)(ActionData*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2ED0A30))(this, state, actions);
	}
	template <typename T = void> T SaveAction(uintptr_t fsm, uintptr_t action) {
		return ((T (*)(ActionData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EE1700))(this, fsm, action);
	}
	template <typename T = void> T SaveActionField(uintptr_t fsm, uintptr_t fieldType, uintptr_t obj) {
		return ((T (*)(ActionData*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EE1A90))(this, fsm, fieldType, obj);
	}
	template <typename T = void> T AddByteData(void* bytes) {
		return ((T (*)(ActionData*, void*))(Il2CppBase() + 0x2EE614C))(this, bytes);
	}
	template <typename T = void> T SaveString(Il2CppString* str) {
		return ((T (*)(ActionData*, Il2CppString*))(Il2CppBase() + 0x2EE76E8))(this, str);
	}
	template <typename T = uintptr_t> static T GetParamDataType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EDF304))(0, type);
	}

};

}
