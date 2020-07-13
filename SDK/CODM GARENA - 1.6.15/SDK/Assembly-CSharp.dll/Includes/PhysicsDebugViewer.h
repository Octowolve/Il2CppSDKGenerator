#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PhysicsDebugViewer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PhysicsDebugViewer"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& defaultColor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& boxColor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& sphereColor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& capsuleColor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& meshColor() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& characterColor() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& triggerColor() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& defaultLineAlpha() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& defaultFaceAlpha() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& cachedCameraPos() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& colliderFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& defaultRenderFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& renderFlags() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& cachedCamera() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& frustumPlanes() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& viewDistance() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& lastUpdateCollisonPosition() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> static T& miniUpdateDistanceChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& renderColliderList() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& renderTriggerList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& allColliderList() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*> T& meshVerticesDict() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*> T& meshTrianglesDict() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPostRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFlagSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColliderOfType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddToRenderList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColliderColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCachedMeshVertices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCachedMeshTriangles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> static T get_Intance() {
		return ((T (*)(void *))(Il2CppBase() + 0x47EC178))(0);
	}
	template <typename T = Il2CppVector3> T get_CameraPos() {
		return ((T (*)(PhysicsDebugViewer*))(Il2CppBase() + 0x47EC1F8))(this);
	}
	template <typename T = float> T get_ViewDistance() {
		return ((T (*)(PhysicsDebugViewer*))(Il2CppBase() + 0x47EC20C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PhysicsDebugViewer*))(Il2CppBase() + 0x47EC214))(this);
	}
	template <typename T = void> T OnPostRender() {
		return ((T (*)(PhysicsDebugViewer*))(Il2CppBase() + 0x47EC338))(this);
	}
	template <typename T = void> T ToggleFlag(uintptr_t flag) {
		return ((T (*)(PhysicsDebugViewer*, uintptr_t))(Il2CppBase() + 0x47EC814))(this, flag);
	}
	template <typename T = void> T SetFlag(uintptr_t flag) {
		return ((T (*)(PhysicsDebugViewer*, uintptr_t))(Il2CppBase() + 0x47EC8C4))(this, flag);
	}
	template <typename T = void> T ClearFlag(uintptr_t flag) {
		return ((T (*)(PhysicsDebugViewer*, uintptr_t))(Il2CppBase() + 0x47EC974))(this, flag);
	}
	template <typename T = bool> T IsFlagSet(uintptr_t flag) {
		return ((T (*)(PhysicsDebugViewer*, uintptr_t))(Il2CppBase() + 0x47EC564))(this, flag);
	}
	template <typename T = void> T SetViewDistance(float dist) {
		return ((T (*)(PhysicsDebugViewer*, float))(Il2CppBase() + 0x47ECA24))(this, dist);
	}
	template <typename T = void> T CollectColliders() {
		return ((T (*)(PhysicsDebugViewer*))(Il2CppBase() + 0x47EC614))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetColliderOfType() {
		return ((T (*)(PhysicsDebugViewer*))(Il2CppBase() + 0x4E57E44))(this);
	}
	template <typename T = void> T AddToRenderList(Il2CppArray<uintptr_t>* colliders) {
		return ((T (*)(PhysicsDebugViewer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47ECAD0))(this, colliders);
	}
	template <typename T = void> T RenderCollider(uintptr_t type) {
		return ((T (*)(PhysicsDebugViewer*, uintptr_t))(Il2CppBase() + 0x1E89CCC))(this, type);
	}
	template <typename T = uintptr_t> T GetColliderColor(uintptr_t type) {
		return ((T (*)(PhysicsDebugViewer*, uintptr_t))(Il2CppBase() + 0x47ECEAC))(this, type);
	}
	template <typename T = float> T get_lineAlpha() {
		return ((T (*)(PhysicsDebugViewer*))(Il2CppBase() + 0x47ECFC8))(this);
	}
	template <typename T = float> T get_faceAlpha() {
		return ((T (*)(PhysicsDebugViewer*))(Il2CppBase() + 0x47ECFF4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCachedMeshVertices(uintptr_t mesh) {
		return ((T (*)(PhysicsDebugViewer*, uintptr_t))(Il2CppBase() + 0x47ED020))(this, mesh);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCachedMeshTriangles(uintptr_t mesh) {
		return ((T (*)(PhysicsDebugViewer*, uintptr_t))(Il2CppBase() + 0x47ED184))(this, mesh);
	}
	template <typename T = bool> static T GetColliderOfType_1m__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1BA4A40))(0, e);
	}

};

}
