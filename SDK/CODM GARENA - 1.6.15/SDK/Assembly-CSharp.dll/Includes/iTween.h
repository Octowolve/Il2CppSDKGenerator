#pragma once
#include <Il2Cpp/Il2Cpp.h>

class iTween
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "iTween"));
	}

	template <typename T = uintptr_t> static T& tweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& cameraFade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& method() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& easeType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& loopType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isRunning() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isPaused() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& runningTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& percentage() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& delayStarted() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& kinematic() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& isLocal() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& loop() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = bool> T& reverse() {
		return *(T*)((uintptr_t)this + 0x3F);
	}
	template <typename T = bool> T& wasPaused() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& physics() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = uintptr_t> T& tweenArguments() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ease() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& apply() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& audioSource() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& vector3s() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& vector2s() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& colors() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& floats() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rects() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& path() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector3> T& preUpdate() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector3> T& postUpdate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& namedcolorvalue() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& lastRealTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& useRealTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraFadeFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CameraFadeFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraFadeTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CameraFadeTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValueTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FadeFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FadeTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColorFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ColorFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColorTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ColorTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AudioFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AudioFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AudioTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AudioTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Stab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LookFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LookFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LookTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LookTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_MoveTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_MoveFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_MoveAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_MoveBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScaleTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ScaleTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScaleFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ScaleFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScaleAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ScaleAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScaleBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ScaleBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RotateTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RotateFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RotateAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RotateBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShakePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShakePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShakeScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShakeScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShakeRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShakeRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PunchPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PunchPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PunchRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PunchRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PunchScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PunchScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateRectTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateColorTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateVector3Targets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateVector2Targets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateFloatTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateColorToTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateAudioToTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateStabTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateLookToTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateMoveToPathTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateMoveToTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateMoveByTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateScaleToTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateScaleByTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateScaleAddTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateRotateToTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateRotateAddTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateRotateByTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateShakePositionTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateShakeScaleTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateShakeRotationTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GeneratePunchPositionTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GeneratePunchRotationTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GeneratePunchScaleTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyRectTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyColorTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyVector3Targets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyVector2Targets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyFloatTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyColorToTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyAudioToTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyStabTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyMoveToPathTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyMoveToTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyMoveByTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyScaleToTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyLookToTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyRotateToTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyRotateAddTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShakePositionTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShakeScaleTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShakeRotationTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPunchPositionTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPunchRotationTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPunchScaleTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TweenDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TweenStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TweenRestart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TweenUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TweenComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TweenLoop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RectUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Vector3Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Vector2Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FloatUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FadeUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColorUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ColorUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AudioUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AudioUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RotateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScaleUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ScaleUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_MoveUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LookUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LookUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PathLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PathLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PutOnPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PutOnPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_PutOnPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_PutOnPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PointOnPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_DrawLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_DrawLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawLineGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawLineGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_DrawLineGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_DrawLineGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawLineHandles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawLineHandles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_DrawLineHandles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_DrawLineHandles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PointOnPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_DrawPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_DrawPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawPathGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawPathGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_DrawPathGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_DrawPathGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawPathHandles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawPathHandles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_DrawPathHandles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_DrawPathHandles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraFadeDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x29C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraFadeDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraFadeSwap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraFadeAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CameraFadeAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_CameraFadeAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Resume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Resume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Resume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_Resume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_Resume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopByName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x304);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_StopByName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30C);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_StopByName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x314);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x31C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x324);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x32C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x334);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawLineHelper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawPathHelper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x33C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PathControlPointGenerator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Interp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x344);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Launch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CleanArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RetrieveArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x354);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEasingFunction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePercentage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x35C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x364);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConflictCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableKinematic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x36C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableKinematic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResumeDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x374);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_linear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_clerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x37C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_spring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInQuad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x384);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeOutQuad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInOutQuad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInCubic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeOutCubic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x394);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInOutCubic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInQuart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x39C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeOutQuart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInOutQuart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInQuint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeOutQuint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInOutQuint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInSine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeOutSine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInOutSine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInExpo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeOutExpo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInOutExpo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInCirc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeOutCirc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInOutCirc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInBounce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeOutBounce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInOutBounce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeOutBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInOutBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_punch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInElastic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeOutElastic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_easeInOutElastic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3FC);
	}

	template <typename T = void> static T Init(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x318C470))(0, target);
	}
	template <typename T = void> static T CameraFadeFrom(float amount, float time) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x318C8F0))(0, amount, time);
	}
	template <typename T = void> static T CameraFadeFrom_1(uintptr_t args) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x318CF18))(0, args);
	}
	template <typename T = void> static T CameraFadeTo(float amount, float time) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x318E224))(0, amount, time);
	}
	template <typename T = void> static T CameraFadeTo_1(uintptr_t args) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x318E640))(0, args);
	}
	template <typename T = void> static T ValueTo(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x318EE9C))(0, target, args);
	}
	template <typename T = void> static T FadeFrom(uintptr_t target, float alpha, float time) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x3190480))(0, target, alpha, time);
	}
	template <typename T = void> static T FadeFrom_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31907B4))(0, target, args);
	}
	template <typename T = void> static T FadeTo(uintptr_t target, float alpha, float time) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x31908B4))(0, target, alpha, time);
	}
	template <typename T = void> static T FadeTo_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3190BE8))(0, target, args);
	}
	template <typename T = void> static T ColorFrom(uintptr_t target, uintptr_t color, float time) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x3190CE8))(0, target, color, time);
	}
	template <typename T = void> static T ColorFrom_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x318D128))(0, target, args);
	}
	template <typename T = void> static T ColorTo(uintptr_t target, uintptr_t color, float time) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x3191050))(0, target, color, time);
	}
	template <typename T = void> static T ColorTo_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x318E850))(0, target, args);
	}
	template <typename T = void> static T AudioFrom(uintptr_t target, float volume, float pitch, float time) {
		return ((T (*)(void *, uintptr_t, float, float, float))(Il2CppBase() + 0x31913B8))(0, target, volume, pitch, time);
	}
	template <typename T = void> static T AudioFrom_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31917C4))(0, target, args);
	}
	template <typename T = void> static T AudioTo(uintptr_t target, float volume, float pitch, float time) {
		return ((T (*)(void *, uintptr_t, float, float, float))(Il2CppBase() + 0x3191E90))(0, target, volume, pitch, time);
	}
	template <typename T = void> static T AudioTo_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x319229C))(0, target, args);
	}
	template <typename T = void> static T Stab(uintptr_t target, uintptr_t audioclip, float delay) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x31924E4))(0, target, audioclip, delay);
	}
	template <typename T = void> static T Stab_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31927E8))(0, target, args);
	}
	template <typename T = void> static T LookFrom(uintptr_t target, Il2CppVector3 looktarget, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x3192948))(0, target, looktarget, time);
	}
	template <typename T = void> static T LookFrom_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3192C94))(0, target, args);
	}
	template <typename T = void> static T LookTo(uintptr_t target, Il2CppVector3 looktarget, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x31937B4))(0, target, looktarget, time);
	}
	template <typename T = void> static T LookTo_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3193B00))(0, target, args);
	}
	template <typename T = void> static T MoveTo(uintptr_t target, Il2CppVector3 position, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x3193F60))(0, target, position, time);
	}
	template <typename T = void> static T MoveTo_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31942AC))(0, target, args);
	}
	template <typename T = void> static T MoveFrom(uintptr_t target, Il2CppVector3 position, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x31947AC))(0, target, position, time);
	}
	template <typename T = void> static T MoveFrom_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3194AF8))(0, target, args);
	}
	template <typename T = void> static T MoveAdd(uintptr_t target, Il2CppVector3 amount, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x319579C))(0, target, amount, time);
	}
	template <typename T = void> static T MoveAdd_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3195AE8))(0, target, args);
	}
	template <typename T = void> static T MoveBy(uintptr_t target, Il2CppVector3 amount, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x318C5A4))(0, target, amount, time);
	}
	template <typename T = void> static T MoveBy_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3195C7C))(0, target, args);
	}
	template <typename T = void> static T ScaleTo(uintptr_t target, Il2CppVector3 scale, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x3195E10))(0, target, scale, time);
	}
	template <typename T = void> static T ScaleTo_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x319615C))(0, target, args);
	}
	template <typename T = void> static T ScaleFrom(uintptr_t target, Il2CppVector3 scale, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x3196658))(0, target, scale, time);
	}
	template <typename T = void> static T ScaleFrom_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31969A4))(0, target, args);
	}
	template <typename T = void> static T ScaleAdd(uintptr_t target, Il2CppVector3 amount, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x3196FAC))(0, target, amount, time);
	}
	template <typename T = void> static T ScaleAdd_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31972F8))(0, target, args);
	}
	template <typename T = void> static T ScaleBy(uintptr_t target, Il2CppVector3 amount, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x319748C))(0, target, amount, time);
	}
	template <typename T = void> static T ScaleBy_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31977D8))(0, target, args);
	}
	template <typename T = void> static T RotateTo(uintptr_t target, Il2CppVector3 rotation, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x319796C))(0, target, rotation, time);
	}
	template <typename T = void> static T RotateTo_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3197CB8))(0, target, args);
	}
	template <typename T = void> static T RotateFrom(uintptr_t target, Il2CppVector3 rotation, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x31981B4))(0, target, rotation, time);
	}
	template <typename T = void> static T RotateFrom_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3198500))(0, target, args);
	}
	template <typename T = void> static T RotateAdd(uintptr_t target, Il2CppVector3 amount, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x3198C48))(0, target, amount, time);
	}
	template <typename T = void> static T RotateAdd_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3198F94))(0, target, args);
	}
	template <typename T = void> static T RotateBy(uintptr_t target, Il2CppVector3 amount, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x3199128))(0, target, amount, time);
	}
	template <typename T = void> static T RotateBy_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3199474))(0, target, args);
	}
	template <typename T = void> static T ShakePosition(uintptr_t target, Il2CppVector3 amount, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x3199608))(0, target, amount, time);
	}
	template <typename T = void> static T ShakePosition_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3199954))(0, target, args);
	}
	template <typename T = void> static T ShakeScale(uintptr_t target, Il2CppVector3 amount, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x3199AE8))(0, target, amount, time);
	}
	template <typename T = void> static T ShakeScale_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3199E34))(0, target, args);
	}
	template <typename T = void> static T ShakeRotation(uintptr_t target, Il2CppVector3 amount, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x3199FC8))(0, target, amount, time);
	}
	template <typename T = void> static T ShakeRotation_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x319A314))(0, target, args);
	}
	template <typename T = void> static T PunchPosition(uintptr_t target, Il2CppVector3 amount, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x319A4A8))(0, target, amount, time);
	}
	template <typename T = void> static T PunchPosition_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x319A7F4))(0, target, args);
	}
	template <typename T = void> static T PunchRotation(uintptr_t target, Il2CppVector3 amount, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x319A9DC))(0, target, amount, time);
	}
	template <typename T = void> static T PunchRotation_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x319AD28))(0, target, args);
	}
	template <typename T = void> static T PunchScale(uintptr_t target, Il2CppVector3 amount, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x319AF10))(0, target, amount, time);
	}
	template <typename T = void> static T PunchScale_1(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x319B25C))(0, target, args);
	}
	template <typename T = void> T GenerateTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x319B444))(this);
	}
	template <typename T = void> T GenerateRectTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x319D18C))(this);
	}
	template <typename T = void> T GenerateColorTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x319CF4C))(this);
	}
	template <typename T = void> T GenerateVector3Targets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x319CC18))(this);
	}
	template <typename T = void> T GenerateVector2Targets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x319C83C))(this);
	}
	template <typename T = void> T GenerateFloatTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x319C53C))(this);
	}
	template <typename T = void> T GenerateColorToTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x319D3A0))(this);
	}
	template <typename T = void> T GenerateAudioToTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x319E450))(this);
	}
	template <typename T = void> T GenerateStabTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A5DA0))(this);
	}
	template <typename T = void> T GenerateLookToTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A4FA4))(this);
	}
	template <typename T = void> T GenerateMoveToPathTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x319EA34))(this);
	}
	template <typename T = void> T GenerateMoveToTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x319F514))(this);
	}
	template <typename T = void> T GenerateMoveByTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x319FE7C))(this);
	}
	template <typename T = void> T GenerateScaleToTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A07E8))(this);
	}
	template <typename T = void> T GenerateScaleByTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A0F90))(this);
	}
	template <typename T = void> T GenerateScaleAddTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A15C0))(this);
	}
	template <typename T = void> T GenerateRotateToTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A1BCC))(this);
	}
	template <typename T = void> T GenerateRotateAddTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A258C))(this);
	}
	template <typename T = void> T GenerateRotateByTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A2BF4))(this);
	}
	template <typename T = void> T GenerateShakePositionTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A32DC))(this);
	}
	template <typename T = void> T GenerateShakeScaleTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A3790))(this);
	}
	template <typename T = void> T GenerateShakeRotationTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A3BF0))(this);
	}
	template <typename T = void> T GeneratePunchPositionTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A4050))(this);
	}
	template <typename T = void> T GeneratePunchRotationTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A45D4))(this);
	}
	template <typename T = void> T GeneratePunchScaleTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A4B04))(this);
	}
	template <typename T = void> T ApplyRectTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A6DCC))(this);
	}
	template <typename T = void> T ApplyColorTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A7338))(this);
	}
	template <typename T = void> T ApplyVector3Targets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A7914))(this);
	}
	template <typename T = void> T ApplyVector2Targets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A7CD4))(this);
	}
	template <typename T = void> T ApplyFloatTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A8008))(this);
	}
	template <typename T = void> T ApplyColorToTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A82A0))(this);
	}
	template <typename T = void> T ApplyAudioToTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A9250))(this);
	}
	template <typename T = void> T ApplyStabTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A9568))(this);
	}
	template <typename T = void> T ApplyMoveToPathTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A9630))(this);
	}
	template <typename T = void> T ApplyMoveToTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AA1D8))(this);
	}
	template <typename T = void> T ApplyMoveByTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AA62C))(this);
	}
	template <typename T = void> T ApplyScaleToTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AAC14))(this);
	}
	template <typename T = void> T ApplyLookToTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AAF54))(this);
	}
	template <typename T = void> T ApplyRotateToTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AB298))(this);
	}
	template <typename T = void> T ApplyRotateAddTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AB7AC))(this);
	}
	template <typename T = void> T ApplyShakePositionTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31ABC2C))(this);
	}
	template <typename T = void> T ApplyShakeScaleTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AC224))(this);
	}
	template <typename T = void> T ApplyShakeRotationTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AC5FC))(this);
	}
	template <typename T = void> T ApplyPunchPositionTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31ACAA4))(this);
	}
	template <typename T = void> T ApplyPunchRotationTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AD434))(this);
	}
	template <typename T = void> T ApplyPunchScaleTargets() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31ADAA4))(this);
	}
	template <typename T = uintptr_t> T TweenDelay() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31ADFBC))(this);
	}
	template <typename T = void> T TweenStart() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AE0D4))(this);
	}
	template <typename T = uintptr_t> T TweenRestart() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AF5BC))(this);
	}
	template <typename T = void> T TweenUpdate() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AF6D4))(this);
	}
	template <typename T = void> T TweenComplete() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AF9C4))(this);
	}
	template <typename T = void> T TweenLoop() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AFBB4))(this);
	}
	template <typename T = Il2CppRect> static T RectUpdate(Il2CppRect currentValue, Il2CppRect targetValue, float speed) {
		return ((T (*)(void *, Il2CppRect, Il2CppRect, float))(Il2CppBase() + 0x31AFDE0))(0, currentValue, targetValue, speed);
	}
	template <typename T = Il2CppVector3> static T Vector3Update(Il2CppVector3 currentValue, Il2CppVector3 targetValue, float speed) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x31B01B4))(0, currentValue, targetValue, speed);
	}
	template <typename T = Il2CppVector2> static T Vector2Update(Il2CppVector2 currentValue, Il2CppVector2 targetValue, float speed) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float))(Il2CppBase() + 0x31B0370))(0, currentValue, targetValue, speed);
	}
	template <typename T = float> static T FloatUpdate(float currentValue, float targetValue, float speed) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x31B0094))(0, currentValue, targetValue, speed);
	}
	template <typename T = void> static T FadeUpdate(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31B04F4))(0, target, args);
	}
	template <typename T = void> static T FadeUpdate_1(uintptr_t target, float alpha, float time) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x31B1B1C))(0, target, alpha, time);
	}
	template <typename T = void> static T ColorUpdate(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31B0664))(0, target, args);
	}
	template <typename T = void> static T ColorUpdate_1(uintptr_t target, uintptr_t color, float time) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x31B1E50))(0, target, color, time);
	}
	template <typename T = void> static T AudioUpdate(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31B21B8))(0, target, args);
	}
	template <typename T = void> static T AudioUpdate_1(uintptr_t target, float volume, float pitch, float time) {
		return ((T (*)(void *, uintptr_t, float, float, float))(Il2CppBase() + 0x31B2AA0))(0, target, volume, pitch, time);
	}
	template <typename T = void> static T RotateUpdate(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31B2EAC))(0, target, args);
	}
	template <typename T = void> static T RotateUpdate_1(uintptr_t target, Il2CppVector3 rotation, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x31B3880))(0, target, rotation, time);
	}
	template <typename T = void> static T ScaleUpdate(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31B3BCC))(0, target, args);
	}
	template <typename T = void> static T ScaleUpdate_1(uintptr_t target, Il2CppVector3 scale, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x31B45B4))(0, target, scale, time);
	}
	template <typename T = void> static T MoveUpdate(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31B4900))(0, target, args);
	}
	template <typename T = void> static T MoveUpdate_1(uintptr_t target, Il2CppVector3 position, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x31B6724))(0, target, position, time);
	}
	template <typename T = void> static T LookUpdate(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x31B5700))(0, target, args);
	}
	template <typename T = void> static T LookUpdate_1(uintptr_t target, Il2CppVector3 looktarget, float time) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x31B6A70))(0, target, looktarget, time);
	}
	template <typename T = float> static T PathLength(Il2CppArray<uintptr_t>* path) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31B6DBC))(0, path);
	}
	template <typename T = float> static T PathLength_1(Il2CppArray<uintptr_t>* path) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31A6B9C))(0, path);
	}
	template <typename T = uintptr_t> static T CameraTexture(uintptr_t color) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x31B7BA8))(0, color);
	}
	template <typename T = void> static T PutOnPath(uintptr_t target, Il2CppArray<uintptr_t>* path, float percent) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x31B7DC4))(0, target, path, percent);
	}
	template <typename T = void> static T PutOnPath_1(uintptr_t target, Il2CppArray<uintptr_t>* path, float percent) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x31B7F3C))(0, target, path, percent);
	}
	template <typename T = void> static T PutOnPath_2(uintptr_t target, Il2CppArray<uintptr_t>* path, float percent) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x31B808C))(0, target, path, percent);
	}
	template <typename T = void> static T PutOnPath_3(uintptr_t target, Il2CppArray<uintptr_t>* path, float percent) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x31B82D0))(0, target, path, percent);
	}
	template <typename T = Il2CppVector3> static T PointOnPath(Il2CppArray<uintptr_t>* path, float percent) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x31B84FC))(0, path, percent);
	}
	template <typename T = void> static T DrawLine(Il2CppArray<uintptr_t>* line) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31B8708))(0, line);
	}
	template <typename T = void> static T DrawLine_1(Il2CppArray<uintptr_t>* line, uintptr_t color) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x31B8BE0))(0, line, color);
	}
	template <typename T = void> static T DrawLine_2(Il2CppArray<uintptr_t>* line) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31B8D48))(0, line);
	}
	template <typename T = void> static T DrawLine_3(Il2CppArray<uintptr_t>* line, uintptr_t color) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x31B8FBC))(0, line, color);
	}
	template <typename T = void> static T DrawLineGizmos(Il2CppArray<uintptr_t>* line) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31B9204))(0, line);
	}
	template <typename T = void> static T DrawLineGizmos_1(Il2CppArray<uintptr_t>* line, uintptr_t color) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x31B93C0))(0, line, color);
	}
	template <typename T = void> static T DrawLineGizmos_2(Il2CppArray<uintptr_t>* line) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31B9528))(0, line);
	}
	template <typename T = void> static T DrawLineGizmos_3(Il2CppArray<uintptr_t>* line, uintptr_t color) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x31B979C))(0, line, color);
	}
	template <typename T = void> static T DrawLineHandles(Il2CppArray<uintptr_t>* line) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31B99E4))(0, line);
	}
	template <typename T = void> static T DrawLineHandles_1(Il2CppArray<uintptr_t>* line, uintptr_t color) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x31B9BA0))(0, line, color);
	}
	template <typename T = void> static T DrawLineHandles_2(Il2CppArray<uintptr_t>* line) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31B9D08))(0, line);
	}
	template <typename T = void> static T DrawLineHandles_3(Il2CppArray<uintptr_t>* line, uintptr_t color) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x31B9F7C))(0, line, color);
	}
	template <typename T = Il2CppVector3> static T PointOnPath_1(Il2CppArray<uintptr_t>* path, float percent) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x31BA1C4))(0, path, percent);
	}
	template <typename T = void> static T DrawPath(Il2CppArray<uintptr_t>* path) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31BA2E8))(0, path);
	}
	template <typename T = void> static T DrawPath_1(Il2CppArray<uintptr_t>* path, uintptr_t color) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x31BA864))(0, path, color);
	}
	template <typename T = void> static T DrawPath_2(Il2CppArray<uintptr_t>* path) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31BA9CC))(0, path);
	}
	template <typename T = void> static T DrawPath_3(Il2CppArray<uintptr_t>* path, uintptr_t color) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x31BAC40))(0, path, color);
	}
	template <typename T = void> static T DrawPathGizmos(Il2CppArray<uintptr_t>* path) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31BAE88))(0, path);
	}
	template <typename T = void> static T DrawPathGizmos_1(Il2CppArray<uintptr_t>* path, uintptr_t color) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x31BB044))(0, path, color);
	}
	template <typename T = void> static T DrawPathGizmos_2(Il2CppArray<uintptr_t>* path) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31BB1AC))(0, path);
	}
	template <typename T = void> static T DrawPathGizmos_3(Il2CppArray<uintptr_t>* path, uintptr_t color) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x31BB420))(0, path, color);
	}
	template <typename T = void> static T DrawPathHandles(Il2CppArray<uintptr_t>* path) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31BB668))(0, path);
	}
	template <typename T = void> static T DrawPathHandles_1(Il2CppArray<uintptr_t>* path, uintptr_t color) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x31BB824))(0, path, color);
	}
	template <typename T = void> static T DrawPathHandles_2(Il2CppArray<uintptr_t>* path) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31BB98C))(0, path);
	}
	template <typename T = void> static T DrawPathHandles_3(Il2CppArray<uintptr_t>* path, uintptr_t color) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x31BBC00))(0, path, color);
	}
	template <typename T = void> static T CameraFadeDepth(int32_t depth) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x31BBE48))(0, depth);
	}
	template <typename T = void> static T CameraFadeDestroy() {
		return ((T (*)(void *))(Il2CppBase() + 0x31BC100))(0);
	}
	template <typename T = void> static T CameraFadeSwap(uintptr_t texture) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x31BC2DC))(0, texture);
	}
	template <typename T = uintptr_t> static T CameraFadeAdd(uintptr_t texture, int32_t depth) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x31BC4C8))(0, texture, depth);
	}
	template <typename T = uintptr_t> static T CameraFadeAdd_1(uintptr_t texture) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x31BC87C))(0, texture);
	}
	template <typename T = uintptr_t> static T CameraFadeAdd_2() {
		return ((T (*)(void *))(Il2CppBase() + 0x31BCC7C))(0);
	}
	template <typename T = void> static T Resume(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x31BD0A0))(0, target);
	}
	template <typename T = void> static T Resume_1(uintptr_t target, bool includechildren) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x31BD258))(0, target, includechildren);
	}
	template <typename T = void> static T Resume_2(uintptr_t target, Il2CppString* type) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x31BD618))(0, target, type);
	}
	template <typename T = void> static T Resume_3(uintptr_t target, Il2CppString* type, bool includechildren) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x31BD8C4))(0, target, type, includechildren);
	}
	template <typename T = void> static T Resume_4() {
		return ((T (*)(void *))(Il2CppBase() + 0x31BDE3C))(0);
	}
	template <typename T = void> static T Resume_5(Il2CppString* type) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x31BE174))(0, type);
	}
	template <typename T = void> static T Pause(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x31BE6A8))(0, target);
	}
	template <typename T = void> static T Pause_1(uintptr_t target, bool includechildren) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x31BE8E4))(0, target, includechildren);
	}
	template <typename T = void> static T Pause_2(uintptr_t target, Il2CppString* type) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x31BECA4))(0, target, type);
	}
	template <typename T = void> static T Pause_3(uintptr_t target, Il2CppString* type, bool includechildren) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x31BEFD0))(0, target, type, includechildren);
	}
	template <typename T = void> static T Pause_4() {
		return ((T (*)(void *))(Il2CppBase() + 0x31BF5C8))(0);
	}
	template <typename T = void> static T Pause_5(Il2CppString* type) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x31BF900))(0, type);
	}
	template <typename T = int32_t> static T Count() {
		return ((T (*)(void *))(Il2CppBase() + 0x31BFE34))(0);
	}
	template <typename T = int32_t> static T Count_1(Il2CppString* type) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x31BFF58))(0, type);
	}
	template <typename T = int32_t> static T Count_2(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x31C04B0))(0, target);
	}
	template <typename T = int32_t> static T Count_3(uintptr_t target, Il2CppString* type) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x31C0608))(0, target, type);
	}
	template <typename T = void> static T Stop() {
		return ((T (*)(void *))(Il2CppBase() + 0x31C08A8))(0);
	}
	template <typename T = void> static T Stop_1(Il2CppString* type) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x31C0DF0))(0, type);
	}
	template <typename T = void> static T StopByName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x31C15C0))(0, name);
	}
	template <typename T = void> static T Stop_2(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x31C0C40))(0, target);
	}
	template <typename T = void> static T Stop_3(uintptr_t target, bool includechildren) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x31C1D14))(0, target, includechildren);
	}
	template <typename T = void> static T Stop_4(uintptr_t target, Il2CppString* type) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x31C1324))(0, target, type);
	}
	template <typename T = void> static T StopByName_1(uintptr_t target, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x31C1AF4))(0, target, name);
	}
	template <typename T = void> static T Stop_5(uintptr_t target, Il2CppString* type, bool includechildren) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x31C20D4))(0, target, type, includechildren);
	}
	template <typename T = void> static T StopByName_2(uintptr_t target, Il2CppString* name, bool includechildren) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x31C2640))(0, target, name, includechildren);
	}
	template <typename T = uintptr_t> static T Hash(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x318CD0C))(0, args);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31C2B24))(this);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31C4C1C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31C4D34))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31C4E60))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31C4F88))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31C5240))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31C5448))(this);
	}
	template <typename T = void> static T DrawLineHelper(Il2CppArray<uintptr_t>* line, uintptr_t color, Il2CppString* method) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x31B88C4))(0, line, color, method);
	}
	template <typename T = void> static T DrawPathHelper(Il2CppArray<uintptr_t>* path, uintptr_t color, Il2CppString* method) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x31BA4A4))(0, path, color, method);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T PathControlPointGenerator(Il2CppArray<uintptr_t>* path) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x31B70B4))(0, path);
	}
	template <typename T = Il2CppVector3> static T Interp(Il2CppArray<uintptr_t>* pts, float t) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x31B75B0))(0, pts, t);
	}
	template <typename T = void> static T Launch(uintptr_t target, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3190204))(0, target, args);
	}
	template <typename T = uintptr_t> static T CleanArgs(uintptr_t args) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x318F5E0))(0, args);
	}
	template <typename T = Il2CppString*> static T GenerateID() {
		return ((T (*)(void *))(Il2CppBase() + 0x31C551C))(0);
	}
	template <typename T = void> T RetrieveArgs() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31C2C08))(this);
	}
	template <typename T = void> T GetEasingFunction() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31C57B8))(this);
	}
	template <typename T = void> T UpdatePercentage() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AF87C))(this);
	}
	template <typename T = void> T CallBack(Il2CppString* callbackType) {
		return ((T (*)(iTween*, Il2CppString*))(Il2CppBase() + 0x31AE56C))(this, callbackType);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31A648C))(this);
	}
	template <typename T = void> T ConflictCheck() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AEBE8))(this);
	}
	template <typename T = void> T EnableKinematic() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AF4F4))(this);
	}
	template <typename T = void> T DisableKinematic() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31AFD18))(this);
	}
	template <typename T = void> T ResumeDelay() {
		return ((T (*)(iTween*))(Il2CppBase() + 0x31C5354))(this);
	}
	template <typename T = float> T linear(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C5CDC))(this, start, end, value);
	}
	template <typename T = float> T clerp(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31A68E4))(this, start, end, value);
	}
	template <typename T = float> T spring(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C5E28))(this, start, end, value);
	}
	template <typename T = float> T easeInQuad(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C5FFC))(this, start, end, value);
	}
	template <typename T = float> T easeOutQuad(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C6110))(this, start, end, value);
	}
	template <typename T = float> T easeInOutQuad(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C622C))(this, start, end, value);
	}
	template <typename T = float> T easeInCubic(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C6384))(this, start, end, value);
	}
	template <typename T = float> T easeOutCubic(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C649C))(this, start, end, value);
	}
	template <typename T = float> T easeInOutCubic(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C65C4))(this, start, end, value);
	}
	template <typename T = float> T easeInQuart(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C6720))(this, start, end, value);
	}
	template <typename T = float> T easeOutQuart(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C683C))(this, start, end, value);
	}
	template <typename T = float> T easeInOutQuart(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C6964))(this, start, end, value);
	}
	template <typename T = float> T easeInQuint(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C6AC4))(this, start, end, value);
	}
	template <typename T = float> T easeOutQuint(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C6BE4))(this, start, end, value);
	}
	template <typename T = float> T easeInOutQuint(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C6D14))(this, start, end, value);
	}
	template <typename T = float> T easeInSine(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C6E80))(this, start, end, value);
	}
	template <typename T = float> T easeOutSine(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C6FE8))(this, start, end, value);
	}
	template <typename T = float> T easeInOutSine(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C714C))(this, start, end, value);
	}
	template <typename T = float> T easeInExpo(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C72C0))(this, start, end, value);
	}
	template <typename T = float> T easeOutExpo(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C7428))(this, start, end, value);
	}
	template <typename T = float> T easeInOutExpo(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C7590))(this, start, end, value);
	}
	template <typename T = float> T easeInCirc(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C7778))(this, start, end, value);
	}
	template <typename T = float> T easeOutCirc(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C78F4))(this, start, end, value);
	}
	template <typename T = float> T easeInOutCirc(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C7A70))(this, start, end, value);
	}
	template <typename T = float> T easeInBounce(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C7C74))(this, start, end, value);
	}
	template <typename T = float> T easeOutBounce(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C7DA8))(this, start, end, value);
	}
	template <typename T = float> T easeInOutBounce(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C7F78))(this, start, end, value);
	}
	template <typename T = float> T easeInBack(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C80E8))(this, start, end, value);
	}
	template <typename T = float> T easeOutBack(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C8218))(this, start, end, value);
	}
	template <typename T = float> T easeInOutBack(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C8358))(this, start, end, value);
	}
	template <typename T = float> T punch(float amplitude, float value) {
		return ((T (*)(iTween*, float, float))(Il2CppBase() + 0x31AD27C))(this, amplitude, value);
	}
	template <typename T = float> T easeInElastic(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C84DC))(this, start, end, value);
	}
	template <typename T = float> T easeOutElastic(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C86A0))(this, start, end, value);
	}
	template <typename T = float> T easeInOutElastic(float start, float end, float value) {
		return ((T (*)(iTween*, float, float, float))(Il2CppBase() + 0x31C8860))(this, start, end, value);
	}

};

}
