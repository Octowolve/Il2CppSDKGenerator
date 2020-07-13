#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIDrawCall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIDrawCall"));
	}

	template <typename T = void*> static T& mActiveList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& mInactiveList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& UIDCMaterialCacheEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& UIDCMaterialCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> T& widgetCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& depthStart() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& depthEnd() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& manager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& panel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& clipTexture() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& alwaysOnScreen() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& verts() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& norms() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tans() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& uvs() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& uv2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& cols() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mMaterial() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mTexture() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mShader() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& mClipCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mMesh() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mFilter() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mRenderer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mDynamicMat() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mIndices() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& mGo() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WidgetList() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& NeedSortWidgetList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& NextFrameEnable() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = uintptr_t> T& mShadowMode() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& mRebuildMat() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& mLegacyShader() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = int32_t> T& mRenderQueue() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& mTriangles() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& isDirty() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& mTextureClip() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = bool> T& mIsNew() {
		return *(T*)((uintptr_t)this + 0x86);
	}
	template <typename T = bool> T& mIsDisabled() {
		return *(T*)((uintptr_t)this + 0x87);
	}
	template <typename T = uintptr_t> T& onRender() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& onCreateDrawCall() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& mSortingLayerName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& mSortingOrder() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& mPropertyBlockChanged() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& TempSBuilder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& ShaderNamePerProcessCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& ShaderNameSuffix_soft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ShaderNameSuffix_textureClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& UseSetVertexDatas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& mColorSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& maxIndexBufferCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> static T& mCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> T& mBlock() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& dx9BugWorkaround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProcessedShaderName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RebuildMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortWidgetsIfNeeded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMaterials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGeometry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateCachedIndexBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMatPropertyBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWillRenderObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClipping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseInactive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDrawCallMatCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushToDrawCallMatCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearUIDrawCallMatCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIDCMaterialCacheEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveToScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadMaterialParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}

	template <typename T = void*> static T get_list() {
		return ((T (*)(void *))(Il2CppBase() + 0x39DE7AC))(0);
	}
	template <typename T = void*> static T get_activeList() {
		return ((T (*)(void *))(Il2CppBase() + 0x39DE85C))(0);
	}
	template <typename T = void*> static T get_inactiveList() {
		return ((T (*)(void *))(Il2CppBase() + 0x39DE90C))(0);
	}
	template <typename T = uintptr_t> T get_CachedGameObject() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DE9BC))(this);
	}
	template <typename T = int32_t> T get_renderQueue() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DEA8C))(this);
	}
	template <typename T = void> T set_renderQueue(int32_t value) {
		return ((T (*)(UIDrawCall*, int32_t))(Il2CppBase() + 0x39DEA94))(this, value);
	}
	template <typename T = int32_t> T get_sortingOrder() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DEB88))(this);
	}
	template <typename T = void> T set_sortingOrder(int32_t value) {
		return ((T (*)(UIDrawCall*, int32_t))(Il2CppBase() + 0x39DEB90))(this, value);
	}
	template <typename T = Il2CppString*> T get_sortingLayerName() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DEC84))(this);
	}
	template <typename T = void> T set_sortingLayerName(Il2CppString* value) {
		return ((T (*)(UIDrawCall*, Il2CppString*))(Il2CppBase() + 0x39DEDC8))(this, value);
	}
	template <typename T = int32_t> T get_finalRenderQueue() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DEF08))(this);
	}
	template <typename T = uintptr_t> T get_cachedTransform() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DEFE8))(this);
	}
	template <typename T = uintptr_t> T get_baseMaterial() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DF0B8))(this);
	}
	template <typename T = void> T set_baseMaterial(uintptr_t value) {
		return ((T (*)(UIDrawCall*, uintptr_t))(Il2CppBase() + 0x39DF0C0))(this, value);
	}
	template <typename T = uintptr_t> T get_dynamicMaterial() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DF184))(this);
	}
	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DF18C))(this);
	}
	template <typename T = void> T set_mainTexture(uintptr_t value) {
		return ((T (*)(UIDrawCall*, uintptr_t))(Il2CppBase() + 0x39DF194))(this, value);
	}
	template <typename T = uintptr_t> T get_shader() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DF5F8))(this);
	}
	template <typename T = void> T set_shader(uintptr_t value) {
		return ((T (*)(UIDrawCall*, uintptr_t))(Il2CppBase() + 0x39DF600))(this, value);
	}
	template <typename T = uintptr_t> T get_shadowMode() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DF6C4))(this);
	}
	template <typename T = void> T set_shadowMode(uintptr_t value) {
		return ((T (*)(UIDrawCall*, uintptr_t))(Il2CppBase() + 0x39DF6CC))(this, value);
	}
	template <typename T = int32_t> T get_triangles() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DF814))(this);
	}
	template <typename T = bool> T get_isClipped() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DF8D4))(this);
	}
	template <typename T = void> T CreateMaterial() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DF8E4))(this);
	}
	template <typename T = uintptr_t> T GetProcessedShaderName(Il2CppString* shaderName) {
		return ((T (*)(UIDrawCall*, Il2CppString*))(Il2CppBase() + 0x39E0230))(this, shaderName);
	}
	template <typename T = Il2CppString*> static T GetMatDescription(uintptr_t mat) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39E1660))(0, mat);
	}
	template <typename T = uintptr_t> T RebuildMaterial() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39E17CC))(this);
	}
	template <typename T = void> T AddWidget(uintptr_t widget) {
		return ((T (*)(UIDrawCall*, uintptr_t))(Il2CppBase() + 0x39E1DCC))(this, widget);
	}
	template <typename T = void> T RemoveWidget(uintptr_t widget) {
		return ((T (*)(UIDrawCall*, uintptr_t))(Il2CppBase() + 0x39E1F84))(this, widget);
	}
	template <typename T = void> T SortWidgetsIfNeeded() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39E2094))(this);
	}
	template <typename T = void> T UpdateMaterials() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39E22C8))(this);
	}
	template <typename T = void> T UpdateGeometry(int32_t widgetCount) {
		return ((T (*)(UIDrawCall*, int32_t))(Il2CppBase() + 0x39E24B4))(this, widgetCount);
	}
	template <typename T = void> T CreateRenderer() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39E3770))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GenerateCachedIndexBuffer(int32_t vertexCount, int32_t indexCount) {
		return ((T (*)(UIDrawCall*, int32_t, int32_t))(Il2CppBase() + 0x39E32D4))(this, vertexCount, indexCount);
	}
	template <typename T = void> T RefreshMatPropertyBlock() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39DF25C))(this);
	}
	template <typename T = void> T OnWillRenderObject() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39E3A88))(this);
	}
	template <typename T = void> T SetClipping(int32_t index, uintptr_t cr, Il2CppVector2 soft, float angle) {
		return ((T (*)(UIDrawCall*, int32_t, uintptr_t, Il2CppVector2, float))(Il2CppBase() + 0x39E4440))(this, index, cr, soft, angle);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39E4838))(this);
	}
	template <typename T = void> T DoEnable() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39E4DD0))(this);
	}
	template <typename T = void> T DoDisable() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39E4EAC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39E50BC))(this);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t panel, uintptr_t mat, uintptr_t tex, uintptr_t shader, bool nextLateUpdateEnable) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x39E51DC))(0, panel, mat, tex, shader, nextLateUpdateEnable);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* name, uintptr_t pan, uintptr_t mat, uintptr_t tex, uintptr_t shader, bool nextLateUpdateEnable) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x39E5310))(0, name, pan, mat, tex, shader, nextLateUpdateEnable);
	}
	template <typename T = uintptr_t> static T Create_2(Il2CppString* name, bool nextLateUpdateEnable) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x39E54F4))(0, name, nextLateUpdateEnable);
	}
	template <typename T = void> static T ClearAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x39E58F8))(0);
	}
	template <typename T = void> static T ReleaseAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x39E5BC8))(0);
	}
	template <typename T = void> static T ReleaseInactive() {
		return ((T (*)(void *))(Il2CppBase() + 0x39E5CB4))(0);
	}
	template <typename T = int32_t> static T Count(uintptr_t panel) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39E5F68))(0, panel);
	}
	template <typename T = uintptr_t> static T GetDrawCallMatCache(uintptr_t shader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39E0D20))(0, shader);
	}
	template <typename T = bool> static T PushToDrawCallMatCache(uintptr_t mat) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39E1A40))(0, mat);
	}
	template <typename T = void> static T ClearUIDrawCallMatCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x39E65F0))(0);
	}
	template <typename T = void> static T SetUIDCMaterialCacheEnable(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x39E6AAC))(0, enable);
	}
	template <typename T = void> static T Destroy(uintptr_t dc) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39E6BB4))(0, dc);
	}
	template <typename T = void> static T MoveToScene(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39E6EA8))(0, scene);
	}
	template <typename T = uintptr_t> T get_Mat() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39E747C))(this);
	}
	template <typename T = void> T ReloadMaterialParameters() {
		return ((T (*)(UIDrawCall*))(Il2CppBase() + 0x39E7484))(this);
	}

};

}
