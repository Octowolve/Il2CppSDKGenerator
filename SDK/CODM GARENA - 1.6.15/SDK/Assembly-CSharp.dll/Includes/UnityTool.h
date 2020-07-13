#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityTool"));
	}

	template <typename T = int32_t> static T& hismShaderPass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAllComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponentsInChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyInactiveGameObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyEmptyGameObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DestroyEmptyGameObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyIfEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEmptyGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IterateChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoIterate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasComponentInParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyStandaloneComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetachChildFromEmptyParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlattenHierarchy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHierarchyDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsInScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStandaloneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOrAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOrAddUnchecked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__GetAllComponentsInChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRendererValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__GetValidRenderersInChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValidRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChildGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChildTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetChildTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLayerRecursively() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNaN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Distance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DistanceIgnoreY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIdentity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransformEquals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLocalTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreLocalTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimeSince() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimeSinceRealTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimeSinceUnscaledTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTopRootGO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComponentIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTransformIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameObjectPathWithIdx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameObjectPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllCommandBuffersExcept() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrebakePhysXMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelPrebakePhysXMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCopy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateCopy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToByteArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToByteArrayPerBit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtractPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtractRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtractScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeepPrecision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_KeepPrecision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPreciselyUniform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsApproximatelyUniform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsApproximately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransformBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransformByMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInsideIgnoreY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectMeshMaterials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DistanceToRelativeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateWorldBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CalculateWorldBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGlobalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGlobalSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGlobalRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalToWorldMatrixNoScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGlobalScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetGlobalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetGlobalRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetLocalToWorldMatrixNoScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGlobalRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGlobalRadiusHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}

	template <typename T = void> static T DestroyComponent(uintptr_t root) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2830D30))(0, root);
	}
	template <typename T = void> static T DestroyAllComponents(uintptr_t root) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4221B00))(0, root);
	}
	template <typename T = bool> static T DestroyComponentsInChildren(uintptr_t root, bool includeInactive, bool includeRoot) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x45F11D8))(0, root, includeInactive, includeRoot);
	}
	template <typename T = void> static T DestroyInactiveGameObjects(uintptr_t root) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4221CA8))(0, root);
	}
	template <typename T = void> static T DestroyEmptyGameObjects(uintptr_t root) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4221EC8))(0, root);
	}
	template <typename T = bool> static T DestroyEmptyGameObjects_1(uintptr_t root, uintptr_t changed) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4221F88))(0, root, changed);
	}
	template <typename T = bool> static T DestroyIfEmpty(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4222148))(0, go);
	}
	template <typename T = bool> static T IsEmptyGameObject(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4222284))(0, go);
	}
	template <typename T = void> static T IterateChildren(uintptr_t go, uintptr_t childHandler) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4222370))(0, go, childHandler);
	}
	template <typename T = void> static T DoIterate(uintptr_t go, uintptr_t childHandler) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4222418))(0, go, childHandler);
	}
	template <typename T = bool> static T HasComponentInParent(uintptr_t go, bool includingSelf) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x45F1610))(0, go, includingSelf);
	}
	template <typename T = bool> static T DestroyStandaloneComponents(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45F1448))(0, go);
	}
	template <typename T = bool> static T DetachChildFromEmptyParent(uintptr_t root) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422281C))(0, root);
	}
	template <typename T = bool> static T FlattenHierarchy(uintptr_t root, void* IgnoreFlattenFilter) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x4222B40))(0, root, IgnoreFlattenFilter);
	}
	template <typename T = int32_t> static T GetHierarchyDepth(uintptr_t root, void* IgnoreFlattenFilter) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x4222CC0))(0, root, IgnoreFlattenFilter);
	}
	template <typename T = bool> static T IsInScene(uintptr_t go, uintptr_t scene) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4222E0C))(0, go, scene);
	}
	template <typename T = bool> static T IsInScene_1(uintptr_t comp, uintptr_t scene) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4222EE4))(0, comp, scene);
	}
	template <typename T = bool> static T IsStandaloneComponent(uintptr_t comp) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4222FCC))(0, comp);
	}
	template <typename T = uintptr_t> static T GetOrAdd(uintptr_t rootGO) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3395774))(0, rootGO);
	}
	template <typename T = uintptr_t> static T GetOrAddUnchecked(uintptr_t rootGO) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33958F8))(0, rootGO);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetAllComponents(uintptr_t rootGO) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21D3E58))(0, rootGO);
	}
	template <typename T = void> static T _GetAllComponentsInChildren(uintptr_t comList, uintptr_t go) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2830858))(0, comList, go);
	}
	template <typename T = bool> static T IsRendererValid(uintptr_t r) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42230C8))(0, r);
	}
	template <typename T = void> static T _GetValidRenderersInChildren(Il2CppList<uintptr_t>* renderers, uintptr_t go) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4223280))(0, renderers, go);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetValidRenderers(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42236F0))(0, go);
	}
	template <typename T = uintptr_t> static T GetChildGameObject(uintptr_t gameObject, Il2CppString* name, bool includeInactive) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x422392C))(0, gameObject, name, includeInactive);
	}
	template <typename T = uintptr_t> static T GetChildTransform(uintptr_t gameObject, Il2CppString* name, bool includeInactive) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x4223B30))(0, gameObject, name, includeInactive);
	}
	template <typename T = uintptr_t> static T GetChildTransform_1(uintptr_t tr, Il2CppString* name, bool includeInactive) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x4223CD4))(0, tr, name, includeInactive);
	}
	template <typename T = void> static T SetLayerRecursively(uintptr_t trans, int32_t layer, bool force) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4223E68))(0, trans, layer, force);
	}
	template <typename T = bool> static T IsNaN(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x422421C))(0, v);
	}
	template <typename T = float> static T Distance(Il2CppVector3 v1, Il2CppVector3 v2, bool ignoreY) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, bool))(Il2CppBase() + 0x4224324))(0, v1, v2, ignoreY);
	}
	template <typename T = float> static T DistanceIgnoreY(Il2CppVector3 v1, Il2CppVector3 v2) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4224448))(0, v1, v2);
	}
	template <typename T = void> static T AddLocalPosition(uintptr_t trans, Il2CppVector3 added) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x42245A0))(0, trans, added);
	}
	template <typename T = bool> static T IsIdentity(uintptr_t trans) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42246C4))(0, trans);
	}
	template <typename T = bool> static T TransformEquals(uintptr_t trans, uintptr_t other) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4224888))(0, trans, other);
	}
	template <typename T = void> static T ResetLocalTransform(uintptr_t trans) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4224A58))(0, trans);
	}
	template <typename T = void> static T RestoreLocalTransform(uintptr_t trans, Il2CppVector3 pos, Il2CppQuaternion rot, Il2CppVector3 scale) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppQuaternion, Il2CppVector3))(Il2CppBase() + 0x4224B88))(0, trans, pos, rot, scale);
	}
	template <typename T = void> static T SyncGameObject(uintptr_t obj, uintptr_t targetObj) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4224CC8))(0, obj, targetObj);
	}
	template <typename T = void> static T SetLocalPosition(uintptr_t trans, float x, float y, float z) {
		return ((T (*)(void *, uintptr_t, float, float, float))(Il2CppBase() + 0x4224F34))(0, trans, x, y, z);
	}
	template <typename T = bool> static T DestroyChildren(uintptr_t transform, bool destroyImmediately) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x422506C))(0, transform, destroyImmediately);
	}
	template <typename T = float> static T TimeSince(float startTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x42255B0))(0, startTime);
	}
	template <typename T = float> static T TimeSinceRealTime(float startTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4225674))(0, startTime);
	}
	template <typename T = float> static T TimeSinceUnscaledTime(float startTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4225738))(0, startTime);
	}
	template <typename T = uintptr_t> static T GetTopRootGO(uintptr_t go, int32_t layer) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x42257FC))(0, go, layer);
	}
	template <typename T = int32_t> static T GetComponentIndex(uintptr_t comp) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42259BC))(0, comp);
	}
	template <typename T = int32_t> static T GetTransformIndex(uintptr_t tra) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4225B98))(0, tra);
	}
	template <typename T = Il2CppString*> static T GetGameObjectPathWithIdx(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4225DB0))(0, obj);
	}
	template <typename T = Il2CppString*> static T GetGameObjectPath(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4226244))(0, obj);
	}
	template <typename T = void> static T RemoveAllCommandBuffersExcept(uintptr_t cam, Il2CppString* commandBufferName, uintptr_t cameraEvent) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x42264A0))(0, cam, commandBufferName, cameraEvent);
	}
	template <typename T = void> static T PrebakePhysXMesh(uintptr_t mesh, bool collisionOnly) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x422667C))(0, mesh, collisionOnly);
	}
	template <typename T = void> static T CancelPrebakePhysXMesh(uintptr_t mesh) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422674C))(0, mesh);
	}
	template <typename T = uintptr_t> static T CreateCopy(uintptr_t mesh) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422680C))(0, mesh);
	}
	template <typename T = uintptr_t> static T CreateCopy_1(uintptr_t mat) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4226A88))(0, mat);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToByteArray(uintptr_t bits) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4226BB0))(0, bits);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToByteArrayPerBit(uintptr_t bits) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4226CCC))(0, bits);
	}
	template <typename T = Il2CppVector3> static T ExtractPosition(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4226E20))(0, m);
	}
	template <typename T = Il2CppQuaternion> static T ExtractRotation(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4226FD0))(0, m);
	}
	template <typename T = Il2CppVector3> static T ExtractScale(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4227208))(0, m);
	}
	template <typename T = Il2CppVector3> static T KeepPrecision(Il2CppVector3 v, Il2CppString* precision) {
		return ((T (*)(void *, Il2CppVector3, Il2CppString*))(Il2CppBase() + 0x4227480))(0, v, precision);
	}
	template <typename T = float> static T KeepPrecision_1(float f, Il2CppString* precision) {
		return ((T (*)(void *, float, Il2CppString*))(Il2CppBase() + 0x42275F0))(0, f, precision);
	}
	template <typename T = bool> static T IsPreciselyUniform(Il2CppVector3 scale) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x42276C4))(0, scale);
	}
	template <typename T = bool> static T IsApproximatelyUniform(Il2CppVector3 scale, float tolerance) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x4227820))(0, scale, tolerance);
	}
	template <typename T = bool> static T IsApproximately(float a, float b, float tolerance) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4227914))(0, a, b, tolerance);
	}
	template <typename T = uintptr_t> static T TransformBounds(uintptr_t box, uintptr_t matrix) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4227A30))(0, box, matrix);
	}
	template <typename T = uintptr_t> static T TransformByMatrix(uintptr_t box, uintptr_t m) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4227CE4))(0, box, m);
	}
	template <typename T = bool> static T IsInsideIgnoreY(uintptr_t b, Il2CppVector3 p) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x42282CC))(0, b, p);
	}
	template <typename T = Il2CppString*> static T GetError(uintptr_t lodGroup) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42284F0))(0, lodGroup);
	}
	template <typename T = void> static T CollectMeshMaterials(uintptr_t go, Il2CppList<uintptr_t>* meshMaterials) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x42289D8))(0, go, meshMaterials);
	}
	template <typename T = float> static T DistanceToRelativeHeight(float cameraFOV, float distance, float size) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4229204))(0, cameraFOV, distance, size);
	}
	template <typename T = uintptr_t> static T CalculateWorldBounds(uintptr_t go, bool compact) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4229338))(0, go, compact);
	}
	template <typename T = uintptr_t> static T CalculateWorldBounds_1(uintptr_t mesh, uintptr_t trans) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4229E18))(0, mesh, trans);
	}
	template <typename T = Il2CppVector3> static T GetGlobalPosition(uintptr_t col) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422A318))(0, col);
	}
	template <typename T = Il2CppVector3> static T GetGlobalSize(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422A628))(0, collider);
	}
	template <typename T = Il2CppQuaternion> static T GetGlobalRotation(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422A768))(0, collider);
	}
	template <typename T = uintptr_t> static T GetLocalToWorldMatrixNoScale(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422A8A4))(0, collider);
	}
	template <typename T = Il2CppVector3> static T GetGlobalScale(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422AA14))(0, collider);
	}
	template <typename T = Il2CppVector3> static T GetGlobalPosition_1(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422AB54))(0, collider);
	}
	template <typename T = Il2CppQuaternion> static T GetGlobalRotation_1(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422AC60))(0, collider);
	}
	template <typename T = uintptr_t> static T GetLocalToWorldMatrixNoScale_1(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422AD9C))(0, collider);
	}
	template <typename T = float> static T GetGlobalRadius(uintptr_t col) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422AECC))(0, col);
	}
	template <typename T = Il2CppVector2> static T GetGlobalRadiusHeight(uintptr_t col) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422B044))(0, col);
	}

};

}
