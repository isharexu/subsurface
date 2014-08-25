#include "statisticswidget.h"
#include "models.h"
#include <QModelIndex>

YearlyStatisticsWidget::YearlyStatisticsWidget(QWidget *parent): QGraphicsView(parent)
{
}

void YearlyStatisticsWidget::setModel(YearlyStatisticsModel *m)
{
	m_model = m;
	connect(m, SIGNAL(dataChanged(QModelIndex,QModelIndex)),
			this, SLOT(modelDataChanged(QModelIndex,QModelIndex)));
	connect(m, SIGNAL(rowsRemoved(QModelIndex,int,int)),
			this, SLOT(modelRowsRemoved(QModelIndex,int,int)));
	connect(m, SIGNAL(rowsInserted(QModelIndex,int,int)),
			this, SLOT(modelRowsInserted(QModelIndex,int,int)));

	modelRowsRemoved(QModelIndex(),0,m_model->rowCount()-1);
	modelRowsInserted(QModelIndex(),0,m_model->rowCount()-1);
}

void YearlyStatisticsWidget::modelRowsInserted(const QModelIndex &index, int first, int last)
{
	// stub
}

void YearlyStatisticsWidget::modelRowsRemoved(const QModelIndex &index, int first, int last)
{
	// stub
}

void YearlyStatisticsWidget::modelDataChanged(const QModelIndex &topLeft, const QModelIndex& bottomRight)
{
	// stub
}