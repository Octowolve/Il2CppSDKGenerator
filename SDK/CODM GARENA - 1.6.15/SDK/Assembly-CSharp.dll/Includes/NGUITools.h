#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NGUITools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NGUITools"));
	}

	template <typename T = uintptr_t> static T& mListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& audioSource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& mLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& mGlobalVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& mLastTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& mLastClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> static T& mTypeNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mSides() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& keys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& mWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& mRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& mGo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& mColorSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& mFrameCountForRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& mRectList_FadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& mRectSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = bool> static T& sUpdateing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& mPendingRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RandomRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHierarchy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindCameraForLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddWidgetCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddWidgetCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWidgetCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateWidgetCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_UpdateWidgetCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTypeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetTypeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterUndo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDirty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_AddChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_AddChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_AddChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_AddChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateRaycastDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateNextDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CalculateNextDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BringForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NormalizeDepths() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NormalizeWidgetDepths() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_NormalizeWidgetDepths() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_NormalizeWidgetDepths() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NormalizePanelDepths() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_CreateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_CreateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChildLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix6_AddChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix7_AddChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMainCameraRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindInParents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FindInParents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyImmediate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Broadcast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Broadcast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallCreatePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActiveChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActiveSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Round() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakePixelPerfect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FitOnScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FitOnScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_FitOnScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_FitOnScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Save() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Load() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPMA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkParentAsChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EncodeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StripSymbols() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMissingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSides() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetSides() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GetSides() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_GetSides() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWorldCorners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetWorldCorners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GetWorldCorners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_GetWorldCorners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFuncName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecuteAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ImmediatelyCreateDrawCalls() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeyToCaption() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Draw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GammaToLinearSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRectFadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRectUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}

	template <typename T = float> static T get_soundVolume() {
		return ((T (*)(void *))(Il2CppBase() + 0x3ECD3A0))(0);
	}
	template <typename T = void> static T set_soundVolume(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3ECD50C))(0, value);
	}
	template <typename T = bool> static T get_fileAccess() {
		return ((T (*)(void *))(Il2CppBase() + 0x3ECD654))(0);
	}
	template <typename T = uintptr_t> static T PlaySound(uintptr_t clip) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ECD67C))(0, clip);
	}
	template <typename T = uintptr_t> static T PlaySound_1(uintptr_t clip, float volume) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x3ECE3E0))(0, clip, volume);
	}
	template <typename T = uintptr_t> static T PlaySound_2(uintptr_t clip, float volume, float pitch) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x3ECD784))(0, clip, volume, pitch);
	}
	template <typename T = int32_t> static T RandomRange(int32_t min, int32_t max) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x3ECE7AC))(0, min, max);
	}
	template <typename T = Il2CppString*> static T GetHierarchy(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ECE8A4))(0, obj);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FindActive() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E42C10))(0);
	}
	template <typename T = uintptr_t> static T FindCameraForLayer(int32_t layer) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3ECEB78))(0, layer);
	}
	template <typename T = void> static T AddWidgetCollider(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ECEF5C))(0, go);
	}
	template <typename T = void> static T AddWidgetCollider_1(uintptr_t go, bool considerInactive) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3ECF054))(0, go, considerInactive);
	}
	template <typename T = void> static T UpdateWidgetCollider(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ECF870))(0, go);
	}
	template <typename T = void> static T UpdateWidgetCollider_1(uintptr_t go, bool considerInactive) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3ECF968))(0, go, considerInactive);
	}
	template <typename T = void> static T UpdateWidgetCollider_2(uintptr_t box, bool considerInactive) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3ECF3B8))(0, box, considerInactive);
	}
	template <typename T = Il2CppString*> static T GetTypeName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E7728C))(0);
	}
	template <typename T = Il2CppString*> static T GetTypeName_1(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ECFB4C))(0, obj);
	}
	template <typename T = void> static T RegisterUndo(uintptr_t obj, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3ECFD54))(0, obj, name);
	}
	template <typename T = void> static T SetDirty(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ECFE24))(0, obj);
	}
	template <typename T = uintptr_t> static T AddChild(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ECFEEC))(0, parent);
	}
	template <typename T = uintptr_t> static T AddChild_1(uintptr_t parent, int32_t layer) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3ED0254))(0, parent, layer);
	}
	template <typename T = uintptr_t> static T AddChild_2(uintptr_t parent, bool undo) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3ED0364))(0, parent, undo);
	}
	template <typename T = uintptr_t> static T AddChild_3(uintptr_t parent, bool undo, int32_t layer) {
		return ((T (*)(void *, uintptr_t, bool, int32_t))(Il2CppBase() + 0x3ECFFF4))(0, parent, undo, layer);
	}
	template <typename T = uintptr_t> static T AddChild_4(uintptr_t parent, uintptr_t prefab) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3ED0474))(0, parent, prefab);
	}
	template <typename T = uintptr_t> static T AddChild_5(uintptr_t parent, uintptr_t prefab, int32_t layer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3ED0584))(0, parent, prefab, layer);
	}
	template <typename T = int32_t> static T CalculateRaycastDepth(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED083C))(0, go);
	}
	template <typename T = int32_t> static T CalculateNextDepth(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED0AC8))(0, go);
	}
	template <typename T = int32_t> static T CalculateNextDepth_1(uintptr_t go, bool ignoreChildrenWithColliders) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3ED0CE0))(0, go, ignoreChildrenWithColliders);
	}
	template <typename T = int32_t> static T AdjustDepth(uintptr_t go, int32_t adjustment) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3ED1034))(0, go, adjustment);
	}
	template <typename T = void> static T BringForward(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED1414))(0, go);
	}
	template <typename T = void> static T PushBack(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED19D0))(0, go);
	}
	template <typename T = void> static T NormalizeDepths() {
		return ((T (*)(void *))(Il2CppBase() + 0x3ED1B48))(0);
	}
	template <typename T = void> static T NormalizeWidgetDepths() {
		return ((T (*)(void *))(Il2CppBase() + 0x3ED18C0))(0);
	}
	template <typename T = void> static T NormalizeWidgetDepths_1(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED1F1C))(0, go);
	}
	template <typename T = void> static T NormalizeWidgetDepths_2(Il2CppArray<uintptr_t>* list) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3ED1C34))(0, list);
	}
	template <typename T = void> static T NormalizePanelDepths() {
		return ((T (*)(void *))(Il2CppBase() + 0x3ED1588))(0);
	}
	template <typename T = uintptr_t> static T CreateUI(bool advanced3D) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3ED2050))(0, advanced3D);
	}
	template <typename T = uintptr_t> static T CreateUI_1(bool advanced3D, int32_t layer) {
		return ((T (*)(void *, bool, int32_t))(Il2CppBase() + 0x3ED3240))(0, advanced3D, layer);
	}
	template <typename T = uintptr_t> static T CreateUI_2(uintptr_t trans, bool advanced3D, int32_t layer) {
		return ((T (*)(void *, uintptr_t, bool, int32_t))(Il2CppBase() + 0x3ED2158))(0, trans, advanced3D, layer);
	}
	template <typename T = uintptr_t> static T CreateUI_3(uintptr_t trans, int32_t layer) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3ED35CC))(0, trans, layer);
	}
	template <typename T = void> static T SetChildLayer(uintptr_t t, int32_t layer) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3ED3448))(0, t, layer);
	}
	template <typename T = uintptr_t> static T AddChild_6(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x335CB0C))(0, parent);
	}
	template <typename T = uintptr_t> static T AddChild_7(uintptr_t parent, bool undo) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x335CE18))(0, parent, undo);
	}
	template <typename T = uintptr_t> static T AddWidget(uintptr_t go, int32_t depth) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x335D300))(0, go, depth);
	}
	template <typename T = uintptr_t> static T AddSprite(uintptr_t go, uintptr_t atlas, Il2CppString* spriteName, int32_t depth) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3ED4440))(0, go, atlas, spriteName, depth);
	}
	template <typename T = uintptr_t> static T GetRoot(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED467C))(0, go);
	}
	template <typename T = uintptr_t> static T GetMainCameraRoot() {
		return ((T (*)(void *))(Il2CppBase() + 0x3ED47E8))(0);
	}
	template <typename T = uintptr_t> static T FindInParents(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x335DD9C))(0, go);
	}
	template <typename T = uintptr_t> static T FindInParents_1(uintptr_t trans) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x335DF48))(0, trans);
	}
	template <typename T = void> static T Destroy(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED4D1C))(0, obj);
	}
	template <typename T = void> static T DestroyChildren(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED5074))(0, t);
	}
	template <typename T = void> static T DestroyImmediate(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED5260))(0, obj);
	}
	template <typename T = void> static T Broadcast(Il2CppString* funcName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3ED5410))(0, funcName);
	}
	template <typename T = void> static T Broadcast_1(Il2CppString* funcName, uintptr_t param) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3ED560C))(0, funcName, param);
	}
	template <typename T = bool> static T IsChild(uintptr_t parent, uintptr_t child) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3ED3350))(0, parent, child);
	}
	template <typename T = void> static T Activate(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED5824))(0, t);
	}
	template <typename T = void> static T Activate_1(uintptr_t t, bool compatibilityMode) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3ED591C))(0, t, compatibilityMode);
	}
	template <typename T = void> static T Deactivate(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED5C28))(0, t);
	}
	template <typename T = void> static T SetActive(uintptr_t go, bool state) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3ED5D54))(0, go, state);
	}
	template <typename T = void> static T SetActive_1(uintptr_t go, bool state, bool compatibilityMode) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x3ED5E64))(0, go, state, compatibilityMode);
	}
	template <typename T = void> static T CallCreatePanel(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED6050))(0, t);
	}
	template <typename T = void> static T SetActiveChildren(uintptr_t go, bool state) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3ED6228))(0, go, state);
	}
	template <typename T = bool> static T IsActive(uintptr_t mb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED640C))(0, mb);
	}
	template <typename T = bool> static T GetActive(uintptr_t mb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ECE4F0))(0, mb);
	}
	template <typename T = bool> static T GetActive_1(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ECE664))(0, go);
	}
	template <typename T = void> static T SetActiveSelf(uintptr_t go, bool state) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3ED5B30))(0, go, state);
	}
	template <typename T = void> static T SetLayer(uintptr_t go, int32_t layer) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3ED6584))(0, go, layer);
	}
	template <typename T = Il2CppVector3> static T Round(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x3ED671C))(0, v);
	}
	template <typename T = void> static T MakePixelPerfect(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED6A5C))(0, t);
	}
	template <typename T = void> static T FitOnScreen(uintptr_t cam, uintptr_t t, bool considerInactive, bool considerChildren) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x3ED6DC4))(0, cam, t, considerInactive, considerChildren);
	}
	template <typename T = void> static T FitOnScreen_1(uintptr_t cam, uintptr_t transform, Il2CppVector3 pos) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x3ED7110))(0, cam, transform, pos);
	}
	template <typename T = void> static T FitOnScreen_2(uintptr_t cam, uintptr_t transform, uintptr_t content, Il2CppVector3 pos, bool considerInactive) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x3ED7244))(0, cam, transform, content, pos, considerInactive);
	}
	template <typename T = void> static T FitOnScreen_3(uintptr_t cam, uintptr_t transform, uintptr_t content, Il2CppVector3 pos, uintptr_t* bounds, bool considerInactive) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t*, bool))(Il2CppBase() + 0x3ED73B0))(0, cam, transform, content, pos, bounds, considerInactive);
	}
	template <typename T = bool> static T Save(Il2CppString* fileName, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3ED79B0))(0, fileName, bytes);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Load(Il2CppString* fileName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3ED7CF0))(0, fileName);
	}
	template <typename T = uintptr_t> static T ApplyPMA(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED7EB0))(0, c);
	}
	template <typename T = void> static T MarkParentAsChanged(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED7FF0))(0, go);
	}
	template <typename T = Il2CppString*> static T get_clipboard() {
		return ((T (*)(void *))(Il2CppBase() + 0x3ED8158))(0);
	}
	template <typename T = void> static T set_clipboard(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3ED820C))(0, value);
	}
	template <typename T = Il2CppString*> static T EncodeColor(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED82D4))(0, c);
	}
	template <typename T = uintptr_t> static T ParseColor(Il2CppString* text, int32_t offset) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x3ED8420))(0, text, offset);
	}
	template <typename T = Il2CppString*> static T StripSymbols(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3ED8560))(0, text);
	}
	template <typename T = uintptr_t> static T AddMissingComponent(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x335D148))(0, go);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetSides(uintptr_t cam) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED8674))(0, cam);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetSides_1(uintptr_t cam, float depth) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x3ED9248))(0, cam, depth);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetSides_2(uintptr_t cam, uintptr_t relativeTo) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3ED9358))(0, cam, relativeTo);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetSides_3(uintptr_t cam, float depth, uintptr_t relativeTo) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x3ED8818))(0, cam, depth, relativeTo);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetWorldCorners(uintptr_t cam) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ED9560))(0, cam);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetWorldCorners_1(uintptr_t cam, float depth) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x3EDA0A8))(0, cam, depth);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetWorldCorners_2(uintptr_t cam, uintptr_t relativeTo) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EDA1B8))(0, cam, relativeTo);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetWorldCorners_3(uintptr_t cam, float depth, uintptr_t relativeTo) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x3ED9704))(0, cam, depth, relativeTo);
	}
	template <typename T = Il2CppString*> static T GetFuncName(uintptr_t obj, Il2CppString* method) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3EDA364))(0, obj, method);
	}
	template <typename T = void> static T Execute(uintptr_t go, Il2CppString* funcName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E898B0))(0, go, funcName);
	}
	template <typename T = void> static T ExecuteAll(uintptr_t root, Il2CppString* funcName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E89A90))(0, root, funcName);
	}
	template <typename T = void> static T ImmediatelyCreateDrawCalls(uintptr_t root) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3EDA590))(0, root);
	}
	template <typename T = Il2CppVector2> static T get_screenSize() {
		return ((T (*)(void *))(Il2CppBase() + 0x3ED9504))(0);
	}
	template <typename T = Il2CppString*> static T KeyToCaption(uintptr_t key) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3EDA728))(0, key);
	}
	template <typename T = uintptr_t> static T Draw(Il2CppString* id, void* onInit) {
		return ((T (*)(void *, Il2CppString*, void*))(Il2CppBase() + 0x335D508))(0, id, onInit);
	}
	template <typename T = uintptr_t> static T GammaToLinearSpace(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3EDBB34))(0, c);
	}
	template <typename T = void> static T SetRectFadeOut(uintptr_t rect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3EDBDE4))(0, rect);
	}
	template <typename T = void> static T SetRectUpdate(uintptr_t rect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3EDBFA4))(0, rect);
	}
	template <typename T = void> static T UpdateRect() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EDC298))(0);
	}

};

}
