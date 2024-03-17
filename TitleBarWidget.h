#pragma once
#include <QWidget>

namespace skframework
{
	class TitleBarWidget : public QWidget
	{
		Q_OBJECT

	public:
		TitleBarWidget(QWidget* parent = Q_NULLPTR);
		~TitleBarWidget();

	protected:
		void mouseMoveEvent(QMouseEvent* e) override;
	};
}
