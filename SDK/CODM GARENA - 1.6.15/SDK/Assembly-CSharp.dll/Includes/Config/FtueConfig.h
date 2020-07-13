#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class FtueConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "FtueConfig"));
	}

	template <typename T = uintptr_t> T& ETutorialType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ETutorialEventType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ETipsType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ETipPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& TipsOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& Offset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& MaskOffset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector2> T& MaskSize() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& TutorialType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& TutorialEventType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ArrowRotZ() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& TipsType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& TipPos() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& TipsOffsetX() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& TipsOffsetY() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Title() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& Content() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& FingerContent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& UnforceTouch() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& OffsetX() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& OffsetY() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& MaskBlackShow() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& MaskOffsetX() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& MaskOffsetY() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& MaskSizeX() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& MaskSizeY() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& PerspectiveRotY() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x4644EF8))(this);
	}
	template <typename T = uintptr_t> static T Get(uintptr_t tutorialType, uintptr_t tutorialEventType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46451B8))(0, tutorialType, tutorialEventType);
	}
	template <typename T = Il2CppString*> T get_TutorialType() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x4645158))(this);
	}
	template <typename T = void> T set_TutorialType(Il2CppString* value) {
		return ((T (*)(FtueConfig*, Il2CppString*))(Il2CppBase() + 0x4645354))(this, value);
	}
	template <typename T = Il2CppString*> T get_TutorialEventType() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x4645160))(this);
	}
	template <typename T = void> T set_TutorialEventType(Il2CppString* value) {
		return ((T (*)(FtueConfig*, Il2CppString*))(Il2CppBase() + 0x464535C))(this, value);
	}
	template <typename T = int32_t> T get_ArrowRotZ() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x4645364))(this);
	}
	template <typename T = void> T set_ArrowRotZ(int32_t value) {
		return ((T (*)(FtueConfig*, int32_t))(Il2CppBase() + 0x464536C))(this, value);
	}
	template <typename T = Il2CppString*> T get_TipsType() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x4645168))(this);
	}
	template <typename T = void> T set_TipsType(Il2CppString* value) {
		return ((T (*)(FtueConfig*, Il2CppString*))(Il2CppBase() + 0x4645374))(this, value);
	}
	template <typename T = Il2CppString*> T get_TipPos() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x4645170))(this);
	}
	template <typename T = void> T set_TipPos(Il2CppString* value) {
		return ((T (*)(FtueConfig*, Il2CppString*))(Il2CppBase() + 0x464537C))(this, value);
	}
	template <typename T = int32_t> T get_TipsOffsetX() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x4645178))(this);
	}
	template <typename T = void> T set_TipsOffsetX(int32_t value) {
		return ((T (*)(FtueConfig*, int32_t))(Il2CppBase() + 0x4645384))(this, value);
	}
	template <typename T = int32_t> T get_TipsOffsetY() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x4645180))(this);
	}
	template <typename T = void> T set_TipsOffsetY(int32_t value) {
		return ((T (*)(FtueConfig*, int32_t))(Il2CppBase() + 0x464538C))(this, value);
	}
	template <typename T = int32_t> T get_Title() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x4645394))(this);
	}
	template <typename T = void> T set_Title(int32_t value) {
		return ((T (*)(FtueConfig*, int32_t))(Il2CppBase() + 0x464539C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Content() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x46453A4))(this);
	}
	template <typename T = void> T set_Content(Il2CppString* value) {
		return ((T (*)(FtueConfig*, Il2CppString*))(Il2CppBase() + 0x46453AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_FingerContent() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x46453B4))(this);
	}
	template <typename T = void> T set_FingerContent(Il2CppString* value) {
		return ((T (*)(FtueConfig*, Il2CppString*))(Il2CppBase() + 0x46453BC))(this, value);
	}
	template <typename T = bool> T get_UnforceTouch() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x46453C4))(this);
	}
	template <typename T = void> T set_UnforceTouch(bool value) {
		return ((T (*)(FtueConfig*, bool))(Il2CppBase() + 0x46453CC))(this, value);
	}
	template <typename T = int32_t> T get_OffsetX() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x4645188))(this);
	}
	template <typename T = void> T set_OffsetX(int32_t value) {
		return ((T (*)(FtueConfig*, int32_t))(Il2CppBase() + 0x46453D4))(this, value);
	}
	template <typename T = int32_t> T get_OffsetY() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x4645190))(this);
	}
	template <typename T = void> T set_OffsetY(int32_t value) {
		return ((T (*)(FtueConfig*, int32_t))(Il2CppBase() + 0x46453DC))(this, value);
	}
	template <typename T = bool> T get_MaskBlackShow() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x46453E4))(this);
	}
	template <typename T = void> T set_MaskBlackShow(bool value) {
		return ((T (*)(FtueConfig*, bool))(Il2CppBase() + 0x46453EC))(this, value);
	}
	template <typename T = int32_t> T get_MaskOffsetX() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x4645198))(this);
	}
	template <typename T = void> T set_MaskOffsetX(int32_t value) {
		return ((T (*)(FtueConfig*, int32_t))(Il2CppBase() + 0x46453F4))(this, value);
	}
	template <typename T = int32_t> T get_MaskOffsetY() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x46451A0))(this);
	}
	template <typename T = void> T set_MaskOffsetY(int32_t value) {
		return ((T (*)(FtueConfig*, int32_t))(Il2CppBase() + 0x46453FC))(this, value);
	}
	template <typename T = int32_t> T get_MaskSizeX() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x46451A8))(this);
	}
	template <typename T = void> T set_MaskSizeX(int32_t value) {
		return ((T (*)(FtueConfig*, int32_t))(Il2CppBase() + 0x4645404))(this, value);
	}
	template <typename T = int32_t> T get_MaskSizeY() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x46451B0))(this);
	}
	template <typename T = void> T set_MaskSizeY(int32_t value) {
		return ((T (*)(FtueConfig*, int32_t))(Il2CppBase() + 0x464540C))(this, value);
	}
	template <typename T = float> T get_PerspectiveRotY() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x4645414))(this);
	}
	template <typename T = void> T set_PerspectiveRotY(float value) {
		return ((T (*)(FtueConfig*, float))(Il2CppBase() + 0x464541C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(FtueConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4645424))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(FtueConfig*))(Il2CppBase() + 0x464564C))(this);
	}

};

}
