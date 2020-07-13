#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuadtreeNodeRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuadtreeNodeRenderer"));
	}

	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& rowInLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& columnInLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& assetPath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& assetPath_GroundOnly() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& partitioningBounds() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& geometryBounds() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& vertexCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& triangleCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& children() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& rootNode() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& targetAssetPath() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& meshFilter() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& meshRenderer() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& meshCollider() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& resourceRequest() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& needLoadedResource() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& drawBounds() {
		return *(T*)((uintptr_t)this + 0x75);
	}
	template <typename T = Il2CppString*> static T& LOD_LOW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadResourceImmediate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadResourceAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMeshAsyncCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNodeVisibilityChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChildNodeVisibilityChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTargetAssetPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraverseTree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_traverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraverseNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_resourceLoaded() {
		return ((T (*)(QuadtreeNodeRenderer*))(Il2CppBase() + 0x3DB5B78))(this);
	}
	template <typename T = bool> T get_IsVisible() {
		return ((T (*)(QuadtreeNodeRenderer*))(Il2CppBase() + 0x3DB5C48))(this);
	}
	template <typename T = uintptr_t> T get_Bounds() {
		return ((T (*)(QuadtreeNodeRenderer*))(Il2CppBase() + 0x3DB5C74))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(QuadtreeNodeRenderer*))(Il2CppBase() + 0x3DB5CA0))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(QuadtreeNodeRenderer*))(Il2CppBase() + 0x3DB5D44))(this);
	}
	template <typename T = void> T LoadResourceImmediate() {
		return ((T (*)(QuadtreeNodeRenderer*))(Il2CppBase() + 0x3DB5FD0))(this);
	}
	template <typename T = void> T LoadResourceAsync() {
		return ((T (*)(QuadtreeNodeRenderer*))(Il2CppBase() + 0x3DB619C))(this);
	}
	template <typename T = void> T LoadMeshAsyncCallback(uintptr_t mesh) {
		return ((T (*)(QuadtreeNodeRenderer*, uintptr_t))(Il2CppBase() + 0x3DB6300))(this, mesh);
	}
	template <typename T = void> T OnNodeVisibilityChanged(int32_t childLevel, bool loaded) {
		return ((T (*)(QuadtreeNodeRenderer*, int32_t, bool))(Il2CppBase() + 0x3DB65B4))(this, childLevel, loaded);
	}
	template <typename T = void> T OnChildNodeVisibilityChanged(int32_t childLevel, bool loaded) {
		return ((T (*)(QuadtreeNodeRenderer*, int32_t, bool))(Il2CppBase() + 0x3DB66EC))(this, childLevel, loaded);
	}
	template <typename T = void> T SwitchTargetAssetPath(Il2CppString* value) {
		return ((T (*)(QuadtreeNodeRenderer*, Il2CppString*))(Il2CppBase() + 0x3DB6A98))(this, value);
	}
	template <typename T = void> T UnloadResource() {
		return ((T (*)(QuadtreeNodeRenderer*))(Il2CppBase() + 0x3DB6BA8))(this);
	}
	template <typename T = void> T SetVisible(bool visible) {
		return ((T (*)(QuadtreeNodeRenderer*, bool))(Il2CppBase() + 0x3DB6D7C))(this, visible);
	}
	template <typename T = void> T TraverseTree(bool preOrder, void* action) {
		return ((T (*)(QuadtreeNodeRenderer*, bool, void*))(Il2CppBase() + 0x3DB6E74))(this, preOrder, action);
	}
	template <typename T = void> static T traverse(uintptr_t node, uintptr_t parent, bool preOrder, void* action) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, void*))(Il2CppBase() + 0x3DB6F44))(0, node, parent, preOrder, action);
	}
	template <typename T = void> static T TraverseNode(uintptr_t node, void* action) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x3DB692C))(0, node, action);
	}

};

}
