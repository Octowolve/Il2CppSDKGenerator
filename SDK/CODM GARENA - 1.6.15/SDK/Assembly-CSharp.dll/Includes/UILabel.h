#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UILabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UILabel"));
	}

	template <typename T = uintptr_t> T& keepCrispWhenShrunk() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& mFontCategory() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& mFont() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = Il2CppString*> T& mText() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = Il2CppString*> T& mLocID() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = int32_t> T& mFontSize() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& mFontStyle() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = uintptr_t> T& mAlignment() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = bool> T& mEncoding() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = int32_t> T& mMaxLineCount() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& mEffectStyle() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = uintptr_t> T& mEffectColor() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& mSymbols() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = Il2CppVector2> T& mEffectDistance() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = uintptr_t> T& mOverflow() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = bool> T& mApplyGradient() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& mGradientTop() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = uintptr_t> T& mGradientBottom() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = int32_t> T& mSpacingX() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = int32_t> T& mSpacingY() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = bool> T& mUseFloatSpacing() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = float> T& mFloatSpacingX() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& mFloatSpacingY() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = bool> T& mOverflowEllipsis() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = int32_t> T& mOverflowWidth() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = uintptr_t> T& mModifier() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = bool> T& mShrinkToFit() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = int32_t> T& mMaxLineWidth() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> T& mMaxLineHeight() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = float> T& mLineWidth() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = bool> T& mMultiline() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = uintptr_t> T& mActiveTTF() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = float> T& mDensity() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = bool> T& mShouldBeProcessed() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = Il2CppString*> T& mProcessedText() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = bool> T& mPremultiply() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = Il2CppVector2> T& mCalculatedSize() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = float> T& mScale() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = int32_t> T& mFinalFontSize() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = int32_t> T& mLastWidth() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = int32_t> T& mLastHeight() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = uintptr_t> T& customModifier() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = void*> static T& mList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& mListShrinkFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& mFontUsage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& NeedProcessTextLabelList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& ThisFrameProcessedTextCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& FrameProcessMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& NextProcessFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> T& ProcessTextLegacyMode() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = bool> T& ProcessTextFull() {
		return *(T*)((uintptr_t)this + 0x291);
	}
	template <typename T = int32_t> static T& mFontChangedDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& mTempDrawcalls() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = void*> static T& mTempLabels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> static T& mTempVerts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppList<int32_t>*> static T& mTempIndices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& COLOR_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& COLOR_DISABLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> T& originalWidgetColor() {
		return *(T*)((uintptr_t)this + 0x294);
	}
	template <typename T = uintptr_t> T& originalEffect() {
		return *(T*)((uintptr_t)this + 0x2A4);
	}
	template <typename T = uintptr_t> T& originalEffectColor() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = uintptr_t> T& originalGradientTopColor() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = uintptr_t> T& originalGradientBottomColor() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = bool> T& isInGrayScale() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = float> T& currentNumber() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = int32_t> T& destinationNumber() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = float> T& changeStep() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = bool> T& isAdd() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = Il2CppString*> T& m_wraptext() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticLateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActiveFont() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFontTextureChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReopenAllLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LanguageRebuildStepClean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LanguageRebuildStepBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLanguageChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FontRebuilt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSides() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpgradeFrom265() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessAndRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEnableInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkAsChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTextInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakePixelPerfect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AssumeNaturalSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCharacterIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetCharacterIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCharacterIndexAtPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetCharacterIndexAtPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWordAtPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetWordAtPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWordAtCharacterIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUrlAtPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetUrlAtPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUrlAtCharacterIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GetCharacterIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintOverlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateOffsetToFit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentSelection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Wrap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Wrap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateContextFont() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GraduallyChangeNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}

	template <typename T = uintptr_t> T get_mTrueTypeFont() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F55038))(this);
	}
	template <typename T = int32_t> T get_finalFontSize() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F550E4))(this);
	}
	template <typename T = bool> T get_shouldBeProcessed() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F55394))(this);
	}
	template <typename T = void> T set_shouldBeProcessed(bool value) {
		return ((T (*)(UILabel*, bool))(Il2CppBase() + 0x2F5539C))(this, value);
	}
	template <typename T = bool> T get_isAnchoredHorizontally() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F553B4))(this);
	}
	template <typename T = bool> T get_isAnchoredVertically() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5550C))(this);
	}
	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F55664))(this);
	}
	template <typename T = void> T set_material(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F55814))(this, value);
	}
	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5581C))(this);
	}
	template <typename T = void> T set_mainTexture(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F559E0))(this, value);
	}
	template <typename T = uintptr_t> T get_font() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F559E8))(this);
	}
	template <typename T = void> T set_font(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F559F8))(this, value);
	}
	template <typename T = uintptr_t> T get_bitmapFont() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F559F0))(this);
	}
	template <typename T = void> T set_bitmapFont(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F559FC))(this, value);
	}
	template <typename T = uintptr_t> T get_trueTypeFont() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F55250))(this);
	}
	template <typename T = void> T set_trueTypeFont(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F55ADC))(this, value);
	}
	template <typename T = uintptr_t> T get_ambigiousFont() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56210))(this);
	}
	template <typename T = void> T set_ambigiousFont(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F56234))(this, value);
	}
	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5634C))(this);
	}
	template <typename T = void> T set_text(Il2CppString* value) {
		return ((T (*)(UILabel*, Il2CppString*))(Il2CppBase() + 0x2F56354))(this, value);
	}
	template <typename T = Il2CppString*> T get_locID() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56578))(this);
	}
	template <typename T = void> T set_locID(Il2CppString* value) {
		return ((T (*)(UILabel*, Il2CppString*))(Il2CppBase() + 0x2F56580))(this, value);
	}
	template <typename T = bool> T IsLocalized() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F567A4))(this);
	}
	template <typename T = int32_t> T get_defaultFontSize() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56888))(this);
	}
	template <typename T = int32_t> T get_fontSize() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F569CC))(this);
	}
	template <typename T = void> T set_fontSize(int32_t value) {
		return ((T (*)(UILabel*, int32_t))(Il2CppBase() + 0x2F56A78))(this, value);
	}
	template <typename T = uintptr_t> T get_fontStyle() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56B60))(this);
	}
	template <typename T = void> T set_fontStyle(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F56B68))(this, value);
	}
	template <typename T = uintptr_t> T get_alignment() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56B88))(this);
	}
	template <typename T = void> T set_alignment(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F56B90))(this, value);
	}
	template <typename T = bool> T get_applyGradient() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56BB0))(this);
	}
	template <typename T = void> T set_applyGradient(bool value) {
		return ((T (*)(UILabel*, bool))(Il2CppBase() + 0x2F56BB8))(this, value);
	}
	template <typename T = uintptr_t> T get_gradientTop() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56BE0))(this);
	}
	template <typename T = void> T set_gradientTop(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F56BF0))(this, value);
	}
	template <typename T = uintptr_t> T get_gradientBottom() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56C80))(this);
	}
	template <typename T = void> T set_gradientBottom(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F56C90))(this, value);
	}
	template <typename T = int32_t> T get_spacingX() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56D20))(this);
	}
	template <typename T = void> T set_spacingX(int32_t value) {
		return ((T (*)(UILabel*, int32_t))(Il2CppBase() + 0x2F56D28))(this, value);
	}
	template <typename T = int32_t> T get_spacingY() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56D48))(this);
	}
	template <typename T = void> T set_spacingY(int32_t value) {
		return ((T (*)(UILabel*, int32_t))(Il2CppBase() + 0x2F56D50))(this, value);
	}
	template <typename T = bool> T get_useFloatSpacing() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56D70))(this);
	}
	template <typename T = void> T set_useFloatSpacing(bool value) {
		return ((T (*)(UILabel*, bool))(Il2CppBase() + 0x2F56D78))(this, value);
	}
	template <typename T = float> T get_floatSpacingX() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56D9C))(this);
	}
	template <typename T = void> T set_floatSpacingX(float value) {
		return ((T (*)(UILabel*, float))(Il2CppBase() + 0x2F56DA4))(this, value);
	}
	template <typename T = float> T get_floatSpacingY() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56E8C))(this);
	}
	template <typename T = void> T set_floatSpacingY(float value) {
		return ((T (*)(UILabel*, float))(Il2CppBase() + 0x2F56E94))(this, value);
	}
	template <typename T = float> T get_effectiveSpacingY() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56F7C))(this);
	}
	template <typename T = float> T get_effectiveSpacingX() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56FA0))(this);
	}
	template <typename T = bool> T get_overflowEllipsis() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56FC4))(this);
	}
	template <typename T = void> T set_overflowEllipsis(bool value) {
		return ((T (*)(UILabel*, bool))(Il2CppBase() + 0x2F56FCC))(this, value);
	}
	template <typename T = int32_t> T get_overflowWidth() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56FF4))(this);
	}
	template <typename T = void> T set_overflowWidth(int32_t value) {
		return ((T (*)(UILabel*, int32_t))(Il2CppBase() + 0x2F56FFC))(this, value);
	}
	template <typename T = bool> T get_keepCrisp() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5701C))(this);
	}
	template <typename T = bool> T get_supportEncoding() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F570F8))(this);
	}
	template <typename T = void> T set_supportEncoding(bool value) {
		return ((T (*)(UILabel*, bool))(Il2CppBase() + 0x2F57100))(this, value);
	}
	template <typename T = uintptr_t> T get_symbolStyle() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F57124))(this);
	}
	template <typename T = void> T set_symbolStyle(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F5712C))(this, value);
	}
	template <typename T = uintptr_t> T get_overflowMethod() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F57148))(this);
	}
	template <typename T = void> T set_overflowMethod(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F57150))(this, value);
	}
	template <typename T = bool> T get_multiLine() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5716C))(this);
	}
	template <typename T = void> T set_multiLine(bool value) {
		return ((T (*)(UILabel*, bool))(Il2CppBase() + 0x2F57180))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_localCorners() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F571B0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_worldCorners() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F57420))(this);
	}
	template <typename T = uintptr_t> T get_drawingDimensions() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F57458))(this);
	}
	template <typename T = int32_t> T get_maxLineCount() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F57498))(this);
	}
	template <typename T = void> T set_maxLineCount(int32_t value) {
		return ((T (*)(UILabel*, int32_t))(Il2CppBase() + 0x2F574A0))(this, value);
	}
	template <typename T = uintptr_t> T get_effectStyle() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F57590))(this);
	}
	template <typename T = void> T set_effectStyle(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F57598))(this, value);
	}
	template <typename T = uintptr_t> T get_effectColor() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F575B4))(this);
	}
	template <typename T = void> T set_effectColor(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F575C4))(this, value);
	}
	template <typename T = Il2CppVector2> T get_effectDistance() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F57640))(this);
	}
	template <typename T = void> T set_effectDistance(Il2CppVector2 value) {
		return ((T (*)(UILabel*, Il2CppVector2))(Il2CppBase() + 0x2F57654))(this, value);
	}
	template <typename T = int32_t> T get_quadsPerCharacter() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F576B0))(this);
	}
	template <typename T = Il2CppString*> T get_processedText() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F576D8))(this);
	}
	template <typename T = Il2CppVector2> T get_printedSize() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F57740))(this);
	}
	template <typename T = Il2CppVector2> T get_localSize() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5777C))(this);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F577BC))(this);
	}
	template <typename T = uintptr_t> T get_modifier() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F56880))(this);
	}
	template <typename T = void> T set_modifier(uintptr_t value) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F578CC))(this, value);
	}
	template <typename T = void> static T StaticLateUpdate() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F57908))(0);
	}
	template <typename T = void> T OnInit() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F588B0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F58A60))(this);
	}
	template <typename T = void> T SetActiveFont(uintptr_t fnt) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F55C8C))(this, fnt);
	}
	template <typename T = Il2CppString*> T get_printedText() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F58BB8))(this);
	}
	template <typename T = void> static T OnFontTextureChanged(uintptr_t font) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F58ECC))(0, font);
	}
	template <typename T = uintptr_t> T ReopenAllLabel() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F59674))(this);
	}
	template <typename T = void> T LanguageRebuildStepClean() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F59778))(this);
	}
	template <typename T = void> T LanguageRebuildStepBuild() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F59868))(this);
	}
	template <typename T = void> static T OnLanguageChanged() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F59A74))(0);
	}
	template <typename T = void> T FontRebuilt() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F591E8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetSides(uintptr_t relativeTo) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F59D2C))(this, relativeTo);
	}
	template <typename T = void> T UpgradeFrom265() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F59E2C))(this);
	}
	template <typename T = void> T OnAnchor() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5A0C0))(this);
	}
	template <typename T = void> T ProcessAndRequest() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F560C8))(this);
	}
	template <typename T = void> T DoEnableInternal() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5A474))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5A9A0))(this);
	}
	template <typename T = void> T MarkAsChanged() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5AC68))(this);
	}
	template <typename T = void> T ProcessText(bool legacyMode, bool full) {
		return ((T (*)(UILabel*, bool, bool))(Il2CppBase() + 0x2F571E8))(this, legacyMode, full);
	}
	template <typename T = void> T ProcessTextInternal(bool legacyMode, bool full) {
		return ((T (*)(UILabel*, bool, bool))(Il2CppBase() + 0x2F57DB8))(this, legacyMode, full);
	}
	template <typename T = void> T MakePixelPerfect() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5B740))(this);
	}
	template <typename T = void> T AssumeNaturalSize() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5BB6C))(this);
	}
	template <typename T = int32_t> T GetCharacterIndex(Il2CppVector3 worldPos) {
		return ((T (*)(UILabel*, Il2CppVector3))(Il2CppBase() + 0x2F5BD68))(this, worldPos);
	}
	template <typename T = int32_t> T GetCharacterIndex_1(Il2CppVector2 localPos) {
		return ((T (*)(UILabel*, Il2CppVector2))(Il2CppBase() + 0x2F5BFDC))(this, localPos);
	}
	template <typename T = int32_t> T GetCharacterIndexAtPosition(Il2CppVector3 worldPos, bool precise) {
		return ((T (*)(UILabel*, Il2CppVector3, bool))(Il2CppBase() + 0x2F5BE78))(this, worldPos, precise);
	}
	template <typename T = int32_t> T GetCharacterIndexAtPosition_1(Il2CppVector2 localPos, bool precise) {
		return ((T (*)(UILabel*, Il2CppVector2, bool))(Il2CppBase() + 0x2F5C0DC))(this, localPos, precise);
	}
	template <typename T = Il2CppString*> T GetWordAtPosition(Il2CppVector3 worldPos) {
		return ((T (*)(UILabel*, Il2CppVector3))(Il2CppBase() + 0x2F5CAC8))(this, worldPos);
	}
	template <typename T = Il2CppString*> T GetWordAtPosition_1(Il2CppVector2 localPos) {
		return ((T (*)(UILabel*, Il2CppVector2))(Il2CppBase() + 0x2F5CE70))(this, localPos);
	}
	template <typename T = Il2CppString*> T GetWordAtCharacterIndex(int32_t characterIndex) {
		return ((T (*)(UILabel*, int32_t))(Il2CppBase() + 0x2F5CBE4))(this, characterIndex);
	}
	template <typename T = Il2CppString*> T GetUrlAtPosition(Il2CppVector3 worldPos) {
		return ((T (*)(UILabel*, Il2CppVector3))(Il2CppBase() + 0x2F5CF7C))(this, worldPos);
	}
	template <typename T = Il2CppString*> T GetUrlAtPosition_1(Il2CppVector2 localPos) {
		return ((T (*)(UILabel*, Il2CppVector2))(Il2CppBase() + 0x2F5D2F0))(this, localPos);
	}
	template <typename T = Il2CppString*> T GetUrlAtCharacterIndex(int32_t characterIndex) {
		return ((T (*)(UILabel*, int32_t))(Il2CppBase() + 0x2F5D098))(this, characterIndex);
	}
	template <typename T = int32_t> T GetCharacterIndex_2(int32_t currentIndex, uintptr_t key) {
		return ((T (*)(UILabel*, int32_t, uintptr_t))(Il2CppBase() + 0x2F5D3FC))(this, currentIndex, key);
	}
	template <typename T = void> T PrintOverlay(int32_t start, int32_t end, uintptr_t caret, uintptr_t highlight, uintptr_t caretColor, uintptr_t highlightColor) {
		return ((T (*)(UILabel*, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F5DBE4))(this, start, end, caret, highlight, caretColor, highlightColor);
	}
	template <typename T = void> T OnFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(UILabel*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2F5E154))(this, verts, uvs, cols);
	}
	template <typename T = Il2CppVector2> T ApplyOffset(Il2CppList<Il2CppVector3>* verts, int32_t start) {
		return ((T (*)(UILabel*, Il2CppList<Il2CppVector3>*, int32_t))(Il2CppBase() + 0x2F5C6B0))(this, verts, start);
	}
	template <typename T = void> T ApplyShadow(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols, int32_t start, int32_t end, float x, float y) {
		return ((T (*)(UILabel*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*, int32_t, int32_t, float, float))(Il2CppBase() + 0x2F5E740))(this, verts, uvs, cols, start, end, x, y);
	}
	template <typename T = int32_t> T CalculateOffsetToFit(Il2CppString* text) {
		return ((T (*)(UILabel*, Il2CppString*))(Il2CppBase() + 0x2F5EC14))(this, text);
	}
	template <typename T = void> T SetCurrentProgress() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5ED5C))(this);
	}
	template <typename T = void> T SetCurrentPercent() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5F09C))(this);
	}
	template <typename T = void> T SetCurrentSelection() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5F30C))(this);
	}
	template <typename T = bool> T Wrap(Il2CppString* text, uintptr_t* final) {
		return ((T (*)(UILabel*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2F5F604))(this, text, final);
	}
	template <typename T = bool> T Wrap_1(Il2CppString* text, uintptr_t* final, int32_t height) {
		return ((T (*)(UILabel*, Il2CppString*, uintptr_t*, int32_t))(Il2CppBase() + 0x2F5F704))(this, text, final, height);
	}
	template <typename T = void> T UpdateContext() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5B0C0))(this);
	}
	template <typename T = void> T UpdateContextFont() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5F8E0))(this);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(UILabel*, bool))(Il2CppBase() + 0x2F5FB04))(this, paused);
	}
	template <typename T = bool> T get_GrayScale() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5FC5C))(this);
	}
	template <typename T = void> T set_GrayScale(bool value) {
		return ((T (*)(UILabel*, bool))(Il2CppBase() + 0x2F5FC64))(this, value);
	}
	template <typename T = int32_t> T get_DestinationNumber() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F5FEEC))(this);
	}
	template <typename T = void> T set_DestinationNumber(int32_t value) {
		return ((T (*)(UILabel*, int32_t))(Il2CppBase() + 0x2F5FFAC))(this, value);
	}
	template <typename T = void> T GraduallyChangeNumber() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F60148))(this);
	}
	template <typename T = Il2CppString*> T get_WrapText() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F60338))(this);
	}
	template <typename T = void> T set_WrapText(Il2CppString* value) {
		return ((T (*)(UILabel*, Il2CppString*))(Il2CppBase() + 0x2F60340))(this, value);
	}
	template <typename T = void> T xLuaBaseProxy_OnInit() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F60788))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F60790))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_GetSides(uintptr_t P0) {
		return ((T (*)(UILabel*, uintptr_t))(Il2CppBase() + 0x2F60798))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpgradeFrom265() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F607A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnAnchor() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F607A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoEnableInternal() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F607B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStart() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F607B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_MarkAsChanged() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F607BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_MakePixelPerfect() {
		return ((T (*)(UILabel*))(Il2CppBase() + 0x2F607C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFill(Il2CppList<Il2CppVector3>* P0, Il2CppList<Il2CppVector2>* P1, Il2CppList<uintptr_t>* P2) {
		return ((T (*)(UILabel*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2F607CC))(this, P0, P1, P2);
	}

};

}
